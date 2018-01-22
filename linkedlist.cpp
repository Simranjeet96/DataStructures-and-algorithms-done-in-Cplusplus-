#include<iostream>
#include"node.cpp"
using namespace std;
class node{
private:
    int data;
    node* next;
public:
    node()
    {
        this->data=0;
        this->next=NULL;
    }
node(int data)
{
    this->data=data;
    this->next=NULL;
}

};

class linkedlist{
private:
    node* head;
    node* tail;
    int len;
public:
    linkedlist()
    {
        head=NULL;
        tail=NULL;
        len=0;
    }
    int no_of_nodes(node* head)
    {
        return len;
    }
    int get_head_data()
    {
        return head->data;
    }
    int get_tail_data()
    {
        return tail->data;
    }
    void insert_at_end(int data)
    {
        node* temp=head;
        if(head==NULL)
        {
            head=new node(data);
            tail=head;
            return ;
        }
        tail->next=new node(data);
        tail=tail->next;
    }
    void insert_at_pos(int i,int data)
    {
        if(i<0)
        {
            cout<<"not possible";
            return ;
        }
        if(i<=no_of_nodes(head))
        {
            node* temp=head;
        if(i!=0)
        {
            while(--i)
        {
            temp=temp->next;
        }
        node* new_node= new node(data);
        new_node->next=temp->next;
        temp->next=new_node;
        }else{
        node* newhead=new node(data);
        newhead->next=head;
        head=newhead;
        return ;
        }
        }else{
        cout<<"not possible";
        return ;
        }
    }
    void insert_at_start(data)
{
    insert_at_pos(0,data);
}

int delete_from_pos(int i)
{
    node* temp=head;
    if(i>=no_of_nodes(head))
    {
        return -1;
    }
    if(i<0)
    {
        cout<<"not possible";
        return -1;
    }
    if(i==0)
    {
        int temp1=0;
        temp1=head->data;
        head=head->next;
        delete temp;
        return temp1;
    }
    while(--i)
{
    temp=temp->next;
}
node* to_be_deleted=temp->next;
temp->next=temp->next->next;
delete to_be_deleted;
}
int delete_data(int value)
{
node* temp=head;
node* prev =NULL;
while(temp!=NULL&&temp->data!=value)
{
    prev=temp;
    temp=temp->next;
}
if(temp==head)
{
    int value=temp->data;
    head=head->next;
    delete temp;
    return value;
}
if(temp==NULL)
{
    cout<<"data not found";
    return -1;
}
else{
        int value=temp->data;
prev->next=temp->next;
delete temp;
return value;
    }
}
int extract_data_from_pos(int i)
{
    if(head==NULL)
    {
        return -1;
    }
    node* temp=head;
    while(i--)
    {
     temp=temp->next;
    }
    return temp->data;
}
void update_data_at_pos(int i,int value)
{
    node* temp=head;
    while(i--)
    {
     temp=temp->next;
    }
    temp->data=value;
}
void delete_all(node* head)
{
    node* temp=head;

    while(temp!=NULL)
    {
        head=temp;
        temp=temp->next;
        delete head;
    }

}
void delete_all_from_pos(int pos,int value)
{
    node* temp=head;
    if(i==0)
    {
        temp=head->next;
        delete_all(temp);
        head->next=NULL;
        return ;
    }
    while(--pos)
    {
        temp=temp->next;
    }
    node* head1=
    temp->next=NULL;




}
};
