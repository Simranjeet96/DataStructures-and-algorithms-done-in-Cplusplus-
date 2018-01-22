#include"TreeNode.h"
#include"QueueUsingArray.h"
#include <iostream>
using namespace std;
void takeinput(TreeNode<int>* root)
{
    QueueUsingArray<TreeNode<int>*> q;
    q.enqueue(root);
    cout<<"enter  data ";
        cin>>root->data;

    TreeNode<int>* temp;
    int child;
    int data;
    while(!q.isEmpty())
    {
        temp=q.dequeue();
        cout<<"enter no. of  children of "<<temp->data<<endl;
        cin>>child;
        for(int i=0;i<child;i++)
        {
            cout<<"enter "<<i+1<<" th child of "<<temp->data<<endl;
            cin>>data;
            temp->children.push_back(new TreeNode<int>(data));
            q.enqueue(temp->children.at(i));
        }
    }
}
void printlevelwise(TreeNode<int>* root)
{
    QueueUsingArray<TreeNode<int>*> q;
    q.enqueue(root);

    TreeNode<int>* temp;

    while(!q.isEmpty())
    {
        temp=q.dequeue();

    cout<<temp->data;
        for(int i=0;i<temp->children.size();i++)
        {
            q.enqueue(temp->children.at(i));
        }
    }

}
TreeNode<int>*  makecopy(TreeNode<int>* root)
{
    TreeNode<int>* ROOT=new TreeNode<int>(root->data);

    for(int i=0;i<root->children.size();i++)
    {

        ROOT->children.push_back(makecopy(root->children.at(i)));
    }

    return ROOT;
}

int main()
{
    TreeNode<int>* root=new TreeNode<int>();
    takeinput(root);
    printlevelwise(root);
    cout<<endl;
    root=makecopy(root);
    printlevelwise(root);

}
