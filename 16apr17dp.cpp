#include <iostream>
#include <cstring>
using namespace std;



int helperED(char *s1,char *s2, int m ,int n ,int **output)
{
	if(s1[m]=='\0'||s2[n]=='\0')
	return max(strlen(s1),strlen(s2));
	if(output[m][n]>=0)
	return output[m][n];
	if(s1[0]==s2[0])
	output[m][n]=helperED(s1+1,s2+1,m-1,n-1,output);

	int option1= 1+helperED(s1+1,s2+1,m-1,n-1,output);
	int option2 = 1+helperED(s1,s2+1,m,n-1,output);
	int option3 = 1+helperED(s1+1,s2,m+1,n,output);
	output[m][n] = min(option1,min(option2,option3));

	return output[m][n];
}
int ED3(char *s1,char *s2)
{
	int m= strlen(s1);
	int n = strlen(s2);
	int **output = new int* [m+1];
	for(int i = 0;i<=m;i++)
	{
		output[i]= new int [n+1];
	}
	int i = 0;
	int j = 0;
	while(j<=n)
	{
		output[i][j]=j;
		j++;
	}
	j = 0;
	i=1;
	while(i<=m)
	{
		output[i][j]=i;
		i++;
	}

	for(int i =1;i<=m;i++)
	{
		for(int j =1;j<=n;j++)
			{
			   if(s1[m-i]==s2[n-j])
			   output[i][j]=output[i-1][j-1];
			   else
			   {
			   	output[i][j]=1+min( output[i-1][j-1],min(output[i-1][j],output[i][j-1]));
			   }
			}
	}
	return output[m][n];
}
int ED2(char *s1,char *s2)
{
	int m= strlen(s1);
	int n = strlen(s2);
	int **output = new int* [m+1];
	for(int i = 0;i<=m;i++)
	{
		output[i]= new int [n+1];
		for(int j  =0;j<=n;j++)
		output[i][j]=-1;
	}
	int ans = helperED(s1,s2,m,n,output);
	return ans;
}
int ED(char *s1,char *s2)
{
	if(s1[0]=='\0'||s2[0]=='\0')
	return max(strlen(s1),strlen(s2));

	if(s1[0]==s2[0])
	return ED(s1+1,s2+1);

	return min(1+ED(s1+1,s2+1),min(1+ED(s1+1,s2),1+ED(s1,s2+1)));

}

int helperBinaryTree(int h , int *arr)
{
	if(h==0||h==1)
	return 1;
	int prev;
	if(arr[h-1])
	prev=arr[h-1];
	else
	{
		arr[h-1]=helperBinaryTree(h-1,arr);
		prev=arr[h-1];
	}
	int ans = 0;
	int prevsquare =prev*prev;
	for(int i = 0;i<h;i++)
	{
		if(arr[i])
		{
			ans+=prev*arr[i];
		}
		else
		{
			arr[i]=helperBinaryTree(i,arr);
			ans+=prev*arr[i];
		}
	}
	ans*=2;
	ans+=prevsquare;
	return ans;
}

int BinaryTreecount(int h)
{
	int arr[h] = {};
	int ans =  helperBinaryTree(h,arr);
	return ans;
}
int helperBST(int n,int * arr)
{
	if(n==0)
	return 1;
	int count = 0;
	for(int k =1;k<=n;k++)
	{
		int ans1,ans2;
		if(arr[k-1]>0)
			ans1= arr[k-1];
		else
			{
			ans1 = helperBST(k-1,arr);
			arr[k-1]=ans1;
			}
		if(arr[n-k]>0)
			ans2 = arr[n-k];
		else
			{
			ans2 = helperBST(n-k,arr);
			arr[n-k]=ans2;
			}
		count+=ans1*ans2;

	}
	return count;
}

int BSTcount(int n)
{
	if(n==0)
	return 1;

	int arr[n+1]={};
	return helperBST(n,arr);
}

int helper(int a[],int size,int output[])
{
	if(size<=0)
	return 0;
	if(output[size]>0)
	return output[size];
	else
	output[size]=max(a[0]+helper(a+2,size-2,output),helper(a+1,size-1,output));
	return output[size];

}
int best2(int a[],int size)
{
	int *arr= new int [size+1];
	for(int i = 0;i<=size;i++)
	arr[i]=0;
	int ans = helper(a,size,arr);
	return ans;
}
int best(int a[],int size)
{
	if(size<=0)
	return 0;
	else
	return max(a[0]+best(a+2,size-2),best(a+1,size-1));
}

int main()
{
//	int a[] = {4,8,9,3};
//	cout<<best2(a,4);
//	cout<<BSTcount(3)<<endl;
//	cout<<BinaryTreecount(3);
	char s1[] = "abcd";
	char s2[] = "ceda";
	cout<<ED2(s1,s2);
	cout<<ED3(s1,s2);
}
