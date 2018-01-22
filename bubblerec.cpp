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

node* bubblesort(node* head,node* prev)
{

    if(head->next==NULL)
    {
        return head;
    }


    bubblesort(head->next,head);
    node* temp=prev;
    node* current=head;
while(current->next!=NULL)
{
    if(current->data>current->next->data)
    {
    if(current==head)
    {
        node* store=current->next;
        current->next=current->next->next;
        store->next=current;
        prev->next=store;
        head=store;
    }
    else{
        node* store=current->next;
        current->next=current->next->next;
        store->next=current;
        temp->next=store;
        temp=store;
    }

    }else{
        temp=current;
        current=current->next;
    }
}
return head;



}

node* bubble_sort_LinkedList_rec(node*head)
{
    //write your code here
    if(head->next==NULL)
    {
        return head;
    }
   bubblesort(head->next,head);
     node* current=head;
     node* temp;
while(current->next!=NULL)
{
    if(current->data>current->next->data)
    {
    if(current==head)
    {
        node* store=current->next;
        current->next=current->next->next;
        store->next=current;
       // prev->next=store;
        temp=head;
        head=store;
    }
    else{
        node* store=current->next;
        current->next=current->next->next;
        store->next=current;
        temp->next=store;
        temp=store;
    }

    }else{
        temp=current;
        current=current->next;
    }
}
return head;
}

int main()
{
    node* head=new node(5);
    node* temp=head;
    temp->next=new node(4);
    temp=temp->next;
    temp->next=new node(3);
    temp=temp->next;
    temp->next=new node(2);
    temp=temp->next;
    temp->next=new node(1);
    temp=temp->next;
    temp->next=NULL;
head=bubble_sort_LinkedList_rec(head);
while(head!=NULL)
{
    cout<<head->data<<endl;
    head=head->next;
}
}
