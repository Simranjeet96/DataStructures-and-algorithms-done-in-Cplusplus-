#include <iostream>
using namespace std;
template<class T>
class node{
public:
T data;
node<T> * next;
node(T val):data(val),next(NULL){}
};

template<class V>
class linkedlist{
private:
node<V> * tail;	
node<V> * head;	

public:
void push(V val){
if(tail==NULL)	
{
	tail = new node<V>(val);
	head=tail;
}else{
	tail->next=new node<V>(val);
	tail=tail->next;
}
}
V pop(){
if(tail==NULL)
{
	cout<<"not possible";
}else if(head==tail){
head=NULL;
V data=tail->data;
delete tail;
tail=NULL;
return data;
}
else{
	node<V>* current=head;
	while(current->next!=tail)
	{
		current=current->next;
	}
	current->next=NULL;
	V data=tail->data;
	delete tail;
	tail=current;
	return data;
	}
}
linkedlist(){
	tail=NULL;
	head=NULL;
}
void print(){
	if(head==NULL){
		cout<<"no elements"<<endl;
	}else{
	node<V> * current=head;
	while(current!=NULL)
	{
		cout<<current->data<<endl;
		current=current->next; 
	}	
	}

}
void reverse();
};

template<class U>
void linkedlist<U>::reverse()
{
	if(head==NULL||head->next==NULL)
	{
		return ;
	}

	node<U> * beforehead=NULL;
	node<U> * afterhead=head->next;

	while(1)
	{
		head->next=beforehead;
		beforehead=head;
		if(afterhead==NULL)
		{
			break;
		}
		head=afterhead;
		afterhead=afterhead->next;
	}

			
}



int main()
{
	linkedlist<int> ll;
	int n;
	int val;
	cout<<"enter no of elements:";
	cin>>n;
	while(n--){
		cout<<"enter element";
		cin>>val;
		ll.push(val);	
	}
	ll.print();
	ll.reverse();
	ll.print();
	return 0;
}