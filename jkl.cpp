#include <iostream>
using namespace std;
int maximumValue(int* coins,int pos,int maxcoinvalue,int* answers)
{
	if(pos>maxcoinvalue)
	{
		return 	0;
	}
	if(pos==maxcoinvalue||pos==maxcoinvalue-1)
	{
		return coins[pos]*pos;
	}
		if(answers[pos+2]==-1||pos+2>maxcoinvalue)
		{
			answers[pos+2]=maximumValue(coins,pos+2,maxcoinvalue,answers);
		}
		if(answers[pos+3]==-1||pos+3>maxcoinvalue)
		{
			answers[pos+3]=maximumValue(coins,pos+3,maxcoinvalue,answers);
		}
		if(answers[pos+1]==-1||pos+1>maxcoinvalue)
		{
			answers[pos+1]=maximumValue(coins,pos+1,maxcoinvalue,answers);
		}
	 
	 
	 return max(max(coins[pos]*pos+answers[pos+2],coins[pos]*pos+answers[pos+3]),answers[pos+1]);
}
int main()
{
	int n;
	cin>>n;
	int* arr=new int[n];
	int m=-1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>m)
		{
			m=arr[i];
		}
	}
	int* coins=new int[m+1];
	int* answers=new int[m+1];
	for(int i=0;i<n;i++)
	{
		coins[arr[i]]++;
	}
	for(int i=0;i<=m;i++)
	{
	answers[i]=-1;
	}
		

	cout<<maximumValue(coins,1,m,answers);

	return 0;
}