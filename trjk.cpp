// Following is the Binary Tree node structure
/**************
 class BinaryTreeNode {
 public :
 T data;
 BinaryTreeNode<T> *left;
 BinaryTreeNode<T> *right;
 
 BinaryTreeNode(T data) {
 this -> data = data;
 left = NULL;
 right = NULL;
 }
 };
 ***************/

long long sumOfNodes(BinaryTreeNode<int> *root, int k) {
     /* Don't write main().
     * Don't read input, they are passed as function arguments.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
	if(root==NULL)
	{
		return 0;
	}
	if(k==1)
	{
		return root->data;
	}
  return sumOfNodes(root->left,k-1)+sumOfNodes(root->right,k-1);
  
    
}
