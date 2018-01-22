#include"node.h"
#include<iostream>
#include"BinaryTreeNode.h"


class mypair{
    public:
node*  head;
node*  tail;
};
mypair* func(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return NULL;
    }

    if(root->left==NULL&&root->right==NULL)
    {
        mypair* obj=new mypair();
        obj->head=new node(root->data);
        obj->tail=obj->head;
        obj->tail->next=NULL;
        return obj;
    }
  mypair* leftobj=func(root->left);
  mypair* rightobj=func(root->right);
  if(leftobj!=NULL&&rightobj!=NULL)
  {
      leftobj->tail->next=new node(root->data);
      leftobj->tail=leftobj->tail->next;
      leftobj->tail->next=rightobj->head;
      mypair* finalobj=new mypair();
      finalobj->head=leftobj->head;
      finalobj->tail=rightobj->tail;
      return finalobj;
        }
        else{
            if(leftobj==NULL)
            {
                mypair* finalobj=new mypair();
                finalobj->head=new node(root->data);
                finalobj->head->next=rightobj->head;
                finalobj->tail=rightobj->tail;
                return finalobj;
            }
            if(rightobj==NULL)
            {
                mypair* finalobj=new mypair();
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
node* func1(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return NULL;
    }

    node* leftnode=func1(root->left);
    node* rightnode=func1(root->right);
    if(!leftnode&&!rightnode)
    {
        node* head=leftnode;
        while(head->next!=NULL)
        {
            head=head->next;
        }
        head->next=new node(root->data);
        head=head->next;
        head->next=rightnode;
        return leftnode;
    }else if(leftnode==NULL)
    {
        node* head=new node(root->data);
        head->next=rightnode;
        return head;
    }else{
    node* head=leftnode;
    while(head->next!=NULL)
    {
        head=head->next;
    }
    head->next=new node(root->data);
    return leftnode;
    }
}
int main()
{
    BinaryTreeNode<int>* root=takeInput();
    node* head=func1(root)->head;
}
