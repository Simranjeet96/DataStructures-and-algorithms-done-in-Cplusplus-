#include<bits/stdc++.h>
using namespace std;

class Graph{
public:
int V;
list<pair<int,int> > * adjlist;
Graph(int nodeCount)
{
	V=nodeCount;
	adjlist=new list<pair<int,int> >[V];
}
void addEdge(int u ,int v,int dist){
	adjlist[u].push_back(*(new pair<int,int>(v,dist)));
}

};

int Dijikstra(Graph graph,int source)
{
int* dist=new int[graph.V];
for(int i=0;i<graph.V;i++)
{
	dist[i]=INT_MAX;
}
dist[source]=0;
bool* visited= new bool[graph.V];
for (int i = 0; i < graph.V; ++i)
{
	visited[i]=false;
}
visited[source]=true;

int node=source;
int minNode=0;

while(minNode!=-1){
for(auto ele:graph.adjlist[node]){
	if(!visited[ele.first])
	{
		if(dist[node]+ele.second<dist[ele.first]){
			dist[ele.first]=dist[node]+ele.second;
		}
	}
}
	int min=INT_MAX;
	minNode=-1;
	for(int j=0;j<graph.V;j++){
		
		 
		if(!visited[j]==true && dist[j]<min){
			min=dist[j];
			minNode=j;
		}
	}
	if(minNode!=-1)
	{node=minNode;
	visited[node]=true;}
}
//cout<<dist[0]<<endl<<dist[1]<<endl<<dist[2]<<endl<<dist[3]<<endl<<dist[4]<<endl;
for (int i = 0; i < graph.V; ++i)
{
	cout<<dist[i];
}

return 0;
}


int main(){
Graph graph(5);
graph.addEdge(0,1,4);
graph.addEdge(0,2,2);
graph.addEdge(1,2,3);
graph.addEdge(2,1,1);
graph.addEdge(1,4,3);
graph.addEdge(2,3,4);
graph.addEdge(1,3,2);
graph.addEdge(2,4,5);
graph.addEdge(4,3,1);
Dijikstra(graph,0);
return 0;
}