#include <bits/stdc++.h>
#include"node.h"
#include "BinaryTreeNode.h"
using namespace std;

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

void print(BinaryTreeNode<int>* root) {
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
BinaryTreeNode<int>* buildTreeFromposandin(int in[],int pos[],int ins,int ine,int poss,int pose)
{
    if(pose<poss)
    {
        return NULL;
    }
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(pos[pose]);
    int i=ins;
    while(in[i]!=pos[pose])
    {
        i++;
    }
    root->left=buildTreeFromposandin(in,pos,ins,i-1,poss,poss+i-ins-1);
    root->right=buildTreeFromposandin(in,pos,i+1,ine,poss+i-ins,pose-1);
    return root;

}
int maxx(BinaryTreeNode<int> * root)
{
    if(root==NULL)
    {
        return -1;
    }

    return max(max(maxx(root->left),maxx(root->right)),root->data);
}/*
int minn(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return 1000;
    }
    int min=root->data;
    if(min>minn(root->left))
    {
        min=minn(root->left);
    }
    if(min>minn(root->right))
    {
        min=min(root->right);
    }
    return min;
}*/
class triplet{
public:
    int max;
int min;
bool isBst;
};/*
triplet* optimisedCheckBst(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        triplet* obj=new triplet();
        obj->max=INT_MIN;
        obj->min=INT_MAX;
        obj->isBst=true;
        return obj;
    }
    if(root->data>(optimisedCheckBst(root->left)->max))
    {
    obj->max=root->data;

    }else{
    obj->isBst=false;
    }
    if(obj->isBst)
    {
        if(root->data<optimisedCheckBst(root->right)->min)
        {
            obj->min=root->data;

        }else{
        obj->isBst=false;
        }
    }
    return obj;
}*/
BinaryTreeNode<int>* convertSortedArrayToBst(int arr[],int si,int ei)
{
    if(si>ei)
    {
        return NULL;
    }
    int mid=(si+ei)/2;
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(arr[mid]);
    root->left=convertSortedArrayToBst(arr,si,mid-1);
    root->right=convertSortedArrayToBst(arr,mid+1,ei);
    return root;
}
bool checkbst(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data<=maxx(root->left))
    {
        return false;
    }
    if(root->data>minn(root->right))
    {
        return false;
    }
    if(checkbst(root->right)&&checkbst(root->left))
    {
        return true;
    }else{
    return false;
    }
    return true;
}
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
int main() {/*
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(10);
	BinaryTreeNode<int>* leftNode =
		new BinaryTreeNode<int>(1);
	root->left = leftNode;
	delete root;
	root = takeInput();
	print(root);
	delete root;*//*
	int pre[6]={1,2 ,4,5,3,6};
	int in[6]={ 4, 2 ,5 ,1, 6 ,3};
	int pos[6]={4,5,2,6,3,1};
	BinaryTreeNode<int>* root=buildTree(in,pre,0,5,0,5);
	print(root);
	root=buildTreeFromposandin(in,pos,0,5,0,5);
	print(root);*/
	BinaryTreeNode<int>* root=takeInput();
    node<int>* head=func(root)->head;
}
