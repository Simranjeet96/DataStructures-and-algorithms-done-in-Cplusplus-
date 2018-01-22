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
node* mergee(node* head1,node* head2)//head1 and head2 are not NULL
{
    node* head;

    if(head2==NULL)
    {
        head=head1;
        return head;
    }
    if(head1==NULL)
    {
        head=head2;
        return head;
    }
    if(head1->data<=head2->data)
    {
        head=head1;
        head1=head1->next;
    }
    else{
        head=head2;
        head2=head2->next;
    }
    node* temp;
    temp=head;
    while(head1!=NULL&&head2!=NULL)
    {

        if(head1->data<=head2->data)
        {
            temp->next=head1;
            head1=head1->next;
            temp=temp->next;
        }else{
            temp->next=head2;
            head2=head2->next;
            temp=temp->next;
        }    }
            if(head1!=NULL)
        {
            temp->next=head1;

        }
            if(head2!=NULL)
        {
            temp->next=head2;

        }


    return head;


}

node* insert()
{
    int n;
    cin>>n;
    node* head=NULL;
        node* temp=NULL;

    while(n!=-1)
    {
        if(head==NULL)
       {
            head=new node(n);
            temp=head;
        }
        else{
            temp->next=new node(n);
            temp=temp->next;
                temp->next=NULL;
        }
        cin>>n;
    }

    return head;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
node* midpoint_linkedlist(node *head)
{
    // Write your code here
    node* slow=head;
node* fast=head;
while(fast!=NULL&&(fast->next)!=NULL&&((fast->next)->next)!=NULL)
{
    slow=slow->next;

    fast=fast->next->next;
}
return slow;

}
node* mergeSort(node *head) {
    //write your code here
    if(head==NULL||head->next==NULL)
    {
     return head;
    }

node* mid=midpoint_linkedlist(head);
node* mid_next=mid->next;
mid->next=NULL;
node* head1=mergeSort(head);
node* head2=mergeSort(mid_next);
head=mergee(head1,head2);
return head;
}
int main()
{
    node* head1=NULL;
    head1=insert();
    head1=mergeSort(head1);
    print(head1);
    return 0;
}
