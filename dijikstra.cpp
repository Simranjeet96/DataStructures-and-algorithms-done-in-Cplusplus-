#include <iostream>
#include <climits>
using namespace std;


int main()
{
	int n,m;
	cin>>n>>m;
	int** edges=new int* [n+1];
for(int i=0;i<=n;i++)
	edges[i]=new int[n+1];

	for(int i=0;i<=n;i++)
{
	for(int j=0;j<=n;j++)
	{
		edges[i][j]=-1;
	}
}

for(int i=0;i<m;i++)
{
	int weight,j,k;
	cin>>j>>k>>weight;
	edges[j][k]=weight;
	edges[k][j]=weight;
}

int* curranswer=new int[n+1];
int* finalanswer=new int[n+1];
for(int i=0;i<=n;i++)
{
finalanswer[i]=66666;	
curranswer[i]=INT_MAX;
}
curranswer[1]=0;


int count=0;
while(count!=n)
{
	int index=-1;
	int minimum=INT_MAX;
	for(int i=1;i<=n;i++)
	{
		if(curranswer[i]<minimum&&curranswer[i]!=-1)
		{
			index=i;
			minimum=curranswer[i];
		}

	}	

	if(index!=-1)
	{
		finalanswer[index]=curranswer[index];
		for(int i=1;i<=n;i++)
		{
			if(edges[index][i]!=-1)
			{
				curranswer[i]=min(curranswer[index]+edges[index][i],curranswer[i]);
			}
		}

			curranswer[index]=-1;
	}
	count++;
}
cout<<endl;
	for(int i=1;i<=n;i++)
		cout<<finalanswer[i]<<" ";
}
