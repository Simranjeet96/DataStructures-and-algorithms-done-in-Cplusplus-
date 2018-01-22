#include <iostream>
using namespace std;

int NumOfReachableNodes(int sv,int num,bool** edges,bool* visited)
{

int count=0;
visited[sv]=true;
for(int i=1;i<=num;i++)
{
	if(edges[sv][i])
	{
		if(!visited[i])
		{
			count=count+NumOfReachableNodes(i,num,edges,visited);
						
		}
}
}
return 1+count;

}

int main()
{
	int n, m;
	 cin >> n >> m;
	int* answer=new int[n+1];
	 bool **edges=new bool*[n+1];
	 for(int i=0;i<=n;i++)
	 {
	 	answer[i]=0;
	 	edges[i]=new bool[n+1];
	 	for(int j=0;j<=n;j++)
	 	{
	 		edges[i][j]=false;
	 	}
	 }
	
	bool* visited=new bool[n+1];

	for(int i=0;i<m;i++)
	{
		int k,l;
		cin>>k>>l;
		edges[k][l]=true;
	}


	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
	{
		visited[j]=false;
	}
		answer[i]=NumOfReachableNodes(i,n,edges,visited);
		cout<<answer[i]<<endl;
	}

}