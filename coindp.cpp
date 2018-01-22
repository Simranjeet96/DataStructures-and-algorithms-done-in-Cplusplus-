#include <iostream>
using namespace std;

void func(int turn,int n,int x,int y,int& first,int& second,int arr1[],int arr2[])
{

	if(turn ==1 &&(n==1||n==x||n==y))
		{
			first++;
			return;
		}
	else if(turn ==-1 &&(n==1||n==x||n==y))
		{
			second++;
			return ;
		}
		if(n-1>0)
		{
			if(-1*turn>0)
			{
			if(arr1[2*(n-1)]==-1&&arr1[2*(n-1)-1]==-1)
			{
			int tempfirst=first;
			int tempsecond=second;	
				func(-1*turn,n-1,x,y,first,second,arr1,arr2);
				arr1[2*(n-1)-1]=first - tempfirst;
				arr1[2*(n-1)]=second - tempsecond;
			}
			else{
				first=first+arr1[2*(n-1)-1];
				second=second+arr1[2*(n-1)];
			}
		}
		else{
			if(arr2[2*(n-1)]==-1&&arr2[2*(n-1)-1]==-1)
			{
			int tempfirst=first;
			int tempsecond=second;	
				func(-1*turn,n-1,x,y,first,second,arr1,arr2);
				arr2[2*(n-1)-1]=first - tempfirst;
				arr2[2*(n-1)]=second - tempsecond;
			}
			else{
				first=first+arr2[2*(n-1)-1];
				second=second+arr2[2*(n-1)];	
			}
		}
		}
		if(n-x>0)
		{
		
			if(-1*turn>0)
			{
			if(arr1[2*(n-x)]==-1&&arr1[2*(n-x)-1]==-1)
			{
			int tempfirst=first;
			int tempsecond=second;	
				func(-1*turn,n-x,x,y,first,second,arr1,arr2);
				arr1[2*(n-x)-1]=first - tempfirst;
				arr1[2*(n-x)]=second - tempsecond;
			}
			else{
				first=first+arr1[2*(n-x)-1];
				second=second+arr1[2*(n-x)];
			}
		}
		else{
			if(arr2[2*(n-x)]==-1&&arr2[2*(n-x)-1]==-1)
			{
			int tempfirst=first;
			int tempsecond=second;	
				func(-1*turn,n-x,x,y,first,second,arr1,arr2);
				arr2[2*(n-x)-1]=first - tempfirst;
				arr2[2*(n-x)]=second - tempsecond;
			}
			else{
				first=first+arr2[2*(n-x)-1];
				second=second+arr2[2*(n-x)];	
			}
		}
	}
		if(n-y>0)
		{
			
			if(-1*turn>0)
			{
			if(arr1[2*(n-y)]==-1&&arr1[2*(n-y)-1]==-1)
			{
			int tempfirst=first;
			int tempsecond=second;	
				func(-1*turn,n-y,x,y,first,second,arr1,arr2);
				arr1[2*(n-y)-1]=first - tempfirst;
				arr1[2*(n-y)]=second - tempsecond;
			}
			else{
				first=first+arr1[2*(n-y)-1];
				second=second+arr1[2*(n-y)];
			}
		}
		else{
			if(arr2[2*(n-y)]==-1&&arr2[2*(n-y)-1]==-1)
			{
			int tempfirst=first;
			int tempsecond=second;	
				func(-1*turn,n-y,x,y,first,second,arr1,arr2);
				arr2[2*(n-y)-1]=first - tempfirst;
				arr2[2*(n-y)]=second - tempsecond;
			}
			else{
				first=first+arr2[2*(n-y)-1];
				second=second+arr2[2*(n-y)];	
			}
		}
	}
		
}

int main(int argc, char const *argv[])
{
	
	int first=0;
	int second=0;
	int arr1[1000];
	int arr2[1000];
	for(int i=0;i<1000;i++)
	{
		arr1[i]=-1;
		arr2[i]=-1;
	}
	func(1,3,7,22,first,second,arr1,arr2);
if(first>=second)
{
	cout<<"A wins";
}else{
	cout<<"B wins";
}
return 0;
}