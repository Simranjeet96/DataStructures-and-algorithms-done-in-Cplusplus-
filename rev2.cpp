#include <bits/stdc++.h>
using namespace std;

int Max=0;
void func(int arr[],int size,int sum=0,int recentpos=-1,int currentpos=0)
{

	if(currentpos>=size)
	{
			cout<<sum<<endl;

		if(sum>Max)
		{
			Max=sum;
		}
		return ;
	}

	if(recentpos==-1)
	{
		sum=sum+arr[0];
		func(arr,size,sum,0,currentpos+1);
	}else{
		//1,3,4,5->9
			if(arr[recentpos]+1==arr[currentpos])
			{
				int i=recentpos;
				int count=0;
				while(arr[i]+1==arr[currentpos] && i>=0)
				{
					count++;
					i--;
				}
				int sum1=sum-(count*(arr[currentpos]-1))+arr[currentpos];
				func(arr,size,sum1,currentpos,currentpos+1);
				i=currentpos;
				while(arr[i]==arr[recentpos]+1 && i<size){
					i++;
				}
				if(i<size){
				sum1=0;
				sum1=sum+arr[i];
				func(arr,size,sum1,i,i+1);
			}else{
				func(arr,size,sum,i,i+1);
			}
			}else{
				sum=sum+arr[currentpos];
				func(arr,size,sum,currentpos,currentpos+1);
			}

	}


}

int main()
{
	int n;
	cin>>n;
	int* arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	func(arr,n);
	cout<<Max;
	return 0;

}