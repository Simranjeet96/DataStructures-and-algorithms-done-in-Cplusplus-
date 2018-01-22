/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/
node* func(node* head,node* & tail)
{

    if(head==NULL||head->next==NULL)
    {
        tail=head;
        return head;
    }
    node* smalloutput=reverse_linked_list_rec(head->next);
    node* temp=smalloutput;
    while(smalloutput->next!=NULL)
    {
        smalloutput=smalloutput->next;
    }
    smalloutput->next=head;
    head->next=NULL;
    return temp;

}
node * reverse_linked_list_rec(node * head,node* tail)
{
    //write your recursive code here


}
