#include <bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;
template<typename T>
BinaryTreeNode<T>* takeInput() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}
	BinaryTreeNode<T>* root = new BinaryTreeNode<T>(rootData);
	root->left = takeInput<T>();
	root->right = takeInput<T>();
	return root;
}
/*int maxx(BinaryTreeNode<int>* root)
{
   static int max=-1;
    if(root ==NULL)
    {
        return -1;
    }
    if(root->data>max)
    {
        max=root->data;
    }
    maxx(root->right);
    maxx(root->left);
    return max;
}*/
int maxx(BinaryTreeNode<int> * root)
{
    if(root==NULL)
    {
        return -1;
    }

    return max(max(maxx(root->left),maxx(root->right)),root->data);
}
template <typename T>
void print(BinaryTreeNode<T>* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << ":";
	int leftData = root->left == NULL ? -1 : root->left->data;
	int rightData = root->right? root->right->data : -1;

	cout << leftData << "," << rightData << endl;

	print(root->left);
	print(root->right);
}

int numNodes(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + numNodes(root->left) + numNodes(root->right);
}
int numofleafnodes(BinaryTreeNode<int>* root)
{
    int count=0;
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        return 1;
    }
    count=numofleafnodes(root->right)+numofleafnodes(root->left);
    return count;
}
int height(BinaryTreeNode<int>* root)
{
    //int height;
 if(root==NULL)
 {
     return 0;
 }
    return 1+max(height(root->left),height(root->right));
}

bool isbalanced(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return true;
    }

    if(height(root->left)-height(root->right)<=1&&height(root->left)-height(root->right)>=-1)
    {
    if(isbalanced(root->left)&&isbalanced(root->right))
    {
        return true;
    }else{
    return false;
    }

    }
    else{
        return false;
    }
}
BinaryTreeNode<int>* buildTree(int* in,int* pre,int ins,int ine,int pres,int pree)
{
     if(ins>ine)
     {
         return NULL;
     }
     BinaryTreeNode<int>* root;
     root=new BinaryTreeNode<int>(pre[pres]);
     int i=ins;
     while(in[i]!=pre[pres])
     {
         i++;
     }
     root->left=buildTree(in,pre,ins,i-1,pres+1,pres+i-ins);
     root->right=buildTree(in,pre,i+1,ine,pres+i-ins+1,pree);
     return root;
}


int main() {
	/*BinaryTreeNode<int>* root = new BinaryTreeNode<int>(10);
	BinaryTreeNode<int>* leftNode =
		new BinaryTreeNode<int>(1);
	root->left = leftNode;
	delete root;
	BinaryTreeNode<char>* rot;
	rot = takeInput<char>();
	print(rot);
	cout<<endl;
    print(root);
	cout<<endl<<"hi"<<endl;

	//cout<<maxx(root);

   // cout<<endl<<height(root);
    //cout<<endl<<isbalanced(root);
	delete root;*/

}

