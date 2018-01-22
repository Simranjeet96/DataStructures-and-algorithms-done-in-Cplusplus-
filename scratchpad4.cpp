#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcases;
	cin>>testcases;
	while(testcases--){
	map<int,int> Map;
	int n;
	int temp;
	cin>>n;
	int * arr=new int[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    Map[arr[i]]=0;
	}
		for(int i=0;i<n;i++)
	{
	    Map[arr[i]]++;
	}

	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>=1;j--)
		{
			if(Map[arr[j]]>Map[arr[j-1]])
			{
				temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}else if(Map[arr[j]]==Map[arr[j-1]])
			{
				if(arr[j]<arr[j-1])
				{
					temp=arr[j];
					arr[j]=arr[j-1];
					arr[j-1]=temp;
				}
			}
		}


	}

	
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	
	}
	return 0;
}