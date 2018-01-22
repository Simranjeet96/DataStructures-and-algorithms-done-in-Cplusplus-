#include<iostream>
using namespace std;
void reversel(node* head,node* tail)
{
    node* prev =NULL;
    node* current=head;
    node* temp;
    while(current!=tail->next)
    {
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
}
kreverse(node* head,int k)
{
int i;
node* y;
node* tail=head;
node* prev=NULL;
node* store=head;
while(head!=NULL){
i=k;
tail=head;
while(i>1&&store!=NULL)
{
    tail=tail->next;
    store=tail->next;
}

reversel(head,tail);
    if(prev==NULL)
    {
        y=tail;
        prev=head;
        head=store;
    }else{
        head->next=prev;
        prev=tail;
        head=store;
    }

}
}
int main()
{






}
