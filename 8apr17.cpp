#include<iostream>
#include"BinaryTreeNode.h"
#include"node.h"
using namespace std;
class pairr{
   public:
       int x;
       int y;
};
pairr* func(BinaryTreeNode<int>* root)
{
    if(root==NULL)
    {
        pairr* obj=new pairr();
        obj->x=0;
        obj->y=0;
        return obj;
    }
    pairr* leftobj=func(root->left);
    pairr* rightobj=func(root->right);
    pairr* finalobj=new pairr();
    finalobj->x=root->data+leftobj->y+rightobj->y;
    finalobj->y=max(leftobj->x,leftobj->y)+max(rightobj->x,rightobj->y);
    return finalobj;
}
int main()
{





}
