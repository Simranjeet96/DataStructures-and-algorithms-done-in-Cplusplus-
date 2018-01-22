#include<iostream>
#include"node.h"
using namespace std;
class stackusinglinkedlist{
  node* head;
  int len;
  stackusinglinkedlist()
  {
      head=NULL;
      len=0;
  }
  int size()
  {
      return len;
  }
int pop()
{
    if(size()==0)
    {
        return -1;
    }
    node* temp=head;
    int value=head->data;
    head=head->next;
    len--;
    delete temp;
     return value;
}
void push(int value)
{
    node* newnode=new node(value);
    newnode->next=head;
    head=newnode;
    len++;
}
bool isempty()
{
    return len==0;
}
int top()
{
    return head->data;
}
~stackusinglinkedlist(){
if(head->next!=NULL)
 {
     delete head->next;
 }
 if(head!=NULL)
 delete head;
}

}

};
int main()
{
    stackusinglinkedlist s;
    s.push(10);
    cout<<s.pop;



}
