#include <iostream>
#include <cstring>
using namespace std;
int lcs(int s1,int s2,char arr1[],char arr2[],int memory[][])
{
if(arr1[s1]=='\0'||arr2[s2]=='\0')
{
	return 0;
}
if(arr1[s1]==arr2[s2])
{
	if(memory[s1][s2]==-1)
	{
		memory[s1][s2]= 1+lcs(s1+1,s2+1,arr1,arr2,memory);
		return memory[s1][s2];
	}
	else
	{
		return memory[s1][s2];
	}
}
else{
	if(memory[s1+1][s2]==-1)
	{
		memory[s1+1][s2]=max(lcs(s1+1,s2,arr1,arr2,memory),lcs(s1,s2+1,arr1,arr2,memory));
	return memory[s1+1][s2];
	}else{
return memory[s1+1][s2];
	}
}
}
int helper(char arr1[],char arr2[])
{
int m=strlen(arr1);
int n=strlen(arr2);
int ** memory=new int*[m];
for(int i=0;i<m;i++)
{
memory[i]=new int[n];
for(int j=0;j<n;j++)
{
	*(memory[i]+j) = -1;
}
}

int ans=lcs(0,0,arr1,arr2,memory);
return ans;
}

int main()
{
	
	char arr1[]="simranjeet";
	char arr2[]="manjeet";
	cout<<helper(arr1,arr2);	
return 0;
}