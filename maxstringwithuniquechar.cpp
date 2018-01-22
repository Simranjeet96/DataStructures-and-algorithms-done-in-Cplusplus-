#include<iostream>
using namespace std;
void findmaxlen(char input[],int n)
{
    int arr[256];
    for(int i=0;i<256;i++)
    {
        arr[i]=-1;
    }
int i=0,j=0,maxl=0;
int sind=0,eind=0;
 while(j<n)
{
    while(arr[input[j]]==-1&&j<n)
    {
        arr[input[j]]=j;
        j++;
    }

      if(j-1-i+1>maxl)
    {
        maxl=j-1-i+1;
        sind=i;
        eind=j-1;
    }

    while(i<=arr[input[j]])
    {
        i++;
        }
    arr[input[j]]=j;
j++;
}
cout<<maxl<<endl;
for(int m=sind;m<=eind;m++)
{cout<<input[m];
}
}
int main()
{
    char arr[]="this is a test str";
    int i=0;
    while(arr[i]!=0)
    {
        i++;
    }
    findmaxlen(arr,i);
}
