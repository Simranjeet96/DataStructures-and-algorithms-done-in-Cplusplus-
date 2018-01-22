#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for (int i = 1; i <= n; ++i)
{
	for(int j=0;j<n-i;j++)
	{
		cout<<"  ";
	}
	int k;
	for( k=1;k<=i;k++)
	{
		cout<<i+k-1<<" ";
	}
	k=k-2;
	for(;k>=i;k--)
	{
		cout<<i+k-1<<" ";
	}
	cout<<endl;
}
	
	return 0;
}