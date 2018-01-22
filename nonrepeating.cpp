#include <iostream>
#include <map>
#include <queue>
using namespace std;



int main() {
	//code
	int n;
	cin>>n;
	int i=0;
	char* arr = new char[n];
	queue<char> queue;
	map<char,int> M;
	while(i<n)
	{
		cin>>arr[i];
		if(M.count(arr[i])==0)
		{
			M[arr[i]]=1;
			queue.push(arr[i]);
			cout<<queue.front();
		}else{
			M[arr[i]]++;
			while(!queue.empty() && M[queue.front()]>1)
			{
				queue.pop();
			}
			if(!queue.empty())
			{cout<<queue.front();}
			else{
				cout<<-1;
			}
		}
		i++;
	}
	return 0;
}