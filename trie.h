#ifndef TRIE_h
#define TRIE_h 
#include <map>
class trienode{
public:
trienode(char data)
{
	this->data=data;
	isWord=false;
	MAP=NULL;
}	
char data;
map<char,trienode*> * MAP;
bool isWord;
}
class tries
{

 map<char,trienode*> * head;	
public:
	tries(){
		head=new map<char,trienode*>;
	}

	void push(string data)
	{	
		if((*head).count(data[0])==0)
		{
			(*head)[data[0]]=new trienode(data[0]);
		}
		
		if(data.length()==1)
		{
			(*head)[data[0]]->MAP=NULL;
			isWord=true;
			return ;
		}
		trienode* current=(*head)[data[0]];
		for(int i=1;i<data.length();i++)
		{
			if(current->MAP!=NULL && (*(current->MAP)).count(data[i])==1)
			{
				current=(*(current->MAP))[data[i]];
				continue;
			}else{
				if(current->MAP==NULL){
					current->MAP=new map<char,trienode*>;
				}
				(*(current->MAP))[data[i]]=new trienode(data[i]);
				current=(*(current->MAP))[data[i]];
			}
		}
		current->isWord=true;
		return;

	}
	bool ifPresent(string data)
	{
		if((*head).count(data[0])==0)
		{
			return false;
		}else{
		trienode* current=(*head)[data[0]];
		if(data.length()==1)
		{
			if(current->isWord==true)
			{
				return true;
			}else{
				return false;
			}
		}
		for(int i=1;i<data.length();i++)
		{
			if((*(current->MAP)).count(arr[i])==0)
			{
				return false;
			}else{
				current=(*(current->MAP))[data[i]];
				continue;
			}


		}
		if(current->isWord==true)
		{return true;}
		else{
			return false;
		}

			}

	}
	~tries(){
			trienode* current;
			for (map<char,trienode*>::iterator it=(*head).begin(); it!=(*head).end(); ++it){
				current=it->second;
				deletefunc(current);
					}
					delete head;
}
 void deletefunc(trienode* current)
 {
 	if(current->MAP!=NULL)
	for (map<char,trienode*>::iterator it=(*(current->MAP)).begin(); it!=(*(current->MAP)).end(); ++it){
		deletefunc(it->second);
		delete it->second;
		}
	delete current->MAP;	
	delete current;
 }
	
};

#endif		