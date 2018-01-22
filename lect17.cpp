#include<iostream>
using namespace std;



class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

node* middle(node* head)
{
node* slow=head;
node* fast=head;
while(fast!=NULL&&(fast->next)!=NULL&&((fast->next)->next)!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
}
return slow;
}
node* func(node* head,node* tail,node* mid)
{

    middle(head)
    func(head,mid);

    func(mid+1,ei);




}


int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next= new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    head->next->next->next->next->next=new node(60);




}
