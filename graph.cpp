#include <iostream>
#include<queue>
using namespace std;

bool hasPath(int sv, int ev, int num, bool** edges, bool* visited) {
	if (edges[sv][ev]) {
		return true;
	}

	visited[sv] = true;

	for (int i = 1; i <= num; i++) {
		if (edges[sv][i]) {
			if (!visited[i]) {
				if (hasPath(i, ev, num, edges, visited)) {
					return true;
				}
			}
		}
	}
	return false;
}
bool haspathusingqueue(int sv, int ev, int num, bool** edges, bool* visited)
{
queue<int> q;
q.push(sv);
int x=q.pop();
 		visited[x]=true;
 		if(edges[x][ev])
	{
		return true;
	}

for(int i=1;i<=num;i++)
{
		
		if(edges[x][i]&!visited[i])
 		{
 			q.push(i);
		}
}

return false;
}
bool isconnected(int sv,int ev,int num)
{
	queue<int> q;
	q.push(sv);
	bool * visited=new bool[num+1];
	for(int i=0;i<=num;i++)
	{
		visited[i]=false;
	} 
	while(!q.empty){
	int x=q.front;
	visited[x]=true;
	q.pop();
	for(int i=1;i<=num;i++)
	{
		if(edges[x][i])
			if(!visited[i])
				q.push(i);
	}
	}
		for(int i=1;i<=num;i++)
		{
			if(!visited[i])
			{
				return false;
			}
		}
		return true;
}

int main() {
	int n;
	int m;
	cin >> n;
	cin >> m;


	bool** edges = new bool*[n + 1];
	for (int i = 1; i <= n; i++) {
		edges[i] = new bool[n + 1];
		for (int j = 1; j <= n; j++) {
			edges[i][j] = false;
		}
	}

	for (int i = 0; i < m; i++) {
		int first;
		int second;
		cin >> first >> second;
		edges[first][second] = true;
		edges[second][first] = true;
	}

	bool* visited = new bool[n + 1];
	for (int i = 1; i <= n; i++) {
		visited[i] = false;
	}

	int start, end;
	cin >> start >> end;
	cout << hasPath(start, end, n, edges, visited) << endl;
	

}

