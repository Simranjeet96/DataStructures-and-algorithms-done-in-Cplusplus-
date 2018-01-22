// A Naive recursive C++ program to find minimum of coins
// to make a given change V
#include<bits/stdc++.h>
using namespace std;
char a[100];
void print(char arr[],char a[],int curr,int i)
{
if(curr==4&&i==2){
    a[i]='\0';
    cout<<a<<endl;
    return ;
}
else
if(curr!=4)
{print(arr,a,curr+1,i);
a[i]=arr[curr];
print(arr,a,curr+1,i+1);
}
}

int main()
{
    char arr[]="abcd";
print(arr,a,0,0)
;    return 0;
}
