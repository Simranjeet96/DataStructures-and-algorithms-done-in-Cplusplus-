#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int dig;
	cin>>dig;
	queue<string> q;
	q.push("2");
	q.push("5");
	int i = 0;
	while(!q.empty())
	{	
		string str=q.front();
		cout<<str<<endl;
		q.pop();
		string str1=str,str2=str;
		if(str.length()+1<=dig)
		{q.push(str1+"2");
		q.push(str2+"5");}
	}
}