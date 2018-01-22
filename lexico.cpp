#include <bits/stdc++.h>
using namespace std;
bool isGreater(int* arr,int lastindex,int max)
{
	int sum=0;
	for (int i = 0; i <=lastindex; ++i)
	{
		sum=sum+arr[i]*pow(10,lastindex-i);
	}
	if(sum>max)
	{
		return true;
	}
	return false;
}
void print(int* ans,int lastindex)
{
	for (int i = 0; i <=lastindex; ++i)
	{
		cout<<ans[i];
	}
	cout<<endl;
}
void func(int* arr,int* ans,int count,int max)
{
	
	for (int i = 0; i < 10; ++i)
	{
		if(count==0&&i==0)
		{
			continue;
		}
		ans[count]=arr[i];
		if(isGreater(ans,count,max))
		{
			//cout<<"hello"<<endl;
			return;
		}else{
			print(ans,count);
			func(arr,ans,count+1,max);
		}
		
	}
}
int main()
{

	//freopen("output.txt","w",stdout);
	int arr[10];
	int ans[20];
	for(int i=0;i<10;i++)	
	{
		arr[i]=i;
	}
	int max=10000;
	func(arr,ans,0,max);
	return 0;
}