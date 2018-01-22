node<int>* rev(node<int>* head,node<int>* newhead)
{
    if(head->next==NULL)
    {
        newhead=head;
        return head;
    }
    rev(head->next)->head;
    head=head->next;
    head->next=NULL;
    return head ;
}
int main()
{
    node<int>* starting;
    rev(head,starting);

}
