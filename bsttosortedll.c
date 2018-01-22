#include"node.h"
#include<iostream>
#include"BinaryTreeNode.h"


class pair{
    public:
node<int>*  head;
node<int>*  tail;
};
pair* func(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return NULL;
    }

    if(root->left==NULL&&root->right==NULL)
    {
        pair* obj=new pair();
        obj->head=new node(root->data);
        obj->tail=head;
        obj->tail->next=NULL;
        return obj;
    }
  pair* leftobj=func(root->left);
  pair* rightobj=func(root->right);
  if(leftobj!=NULL&&rightobj!=NULL)
  {
      leftobj->tail->next=new node(root->data);
      leftobj->tail=leftobj->tail->next;
      leftobj->tail->next=rightobj->head;
      pair* finalobj=new pair();
      finalobj->head=leftobj->head;
      finalobj->tail=rightobj->tail;
      return finalobj;
        }
        else{
            if(leftobj==NULL)
            {
                pair* finalobj=new pair();
                finalobj->head=new node(root->data);
                finalobj->head->next=rightobj->head;
                finalobj->tail=rightobj->tail;
                return finalobj;
            }
            if(rightobj==NULL)
            {
                pair* finalobj=new pair();
                finalobj->head=leftobj->head;
                leftobj->tail->next=new node(root->data);
                leftobj->tail=leftobj->tail->next;
                finalobj->tail=leftobj->tail;
                return finalobj;
            }
        }
}
BinaryTreeNode<int>* takeInput() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	root->left = takeInput();
	root->right = takeInput();
	return root;
}

int main()
{
    BinaryTreeNode<int>* root=takeInput();
    node<int>* head=func(root)->head;
}
