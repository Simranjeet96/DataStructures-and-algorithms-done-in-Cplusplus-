#include <bits/stdc++.h>
using namespace std;
int IntValueOfArr(int* arr)
{
    int i=0;
    int sum=0;
    while(arr[i]!=-1)
    {
        i++;
    }
    int j=i-1;
    i=i-1;
    while(i>=0)
    {
        sum=sum+arr[i]*pow(10,j-i);
        i--;
    }
    
    return sum;
}


void func(int x,int *arr,int pos,int value)//pos->0,value->i
{
if(value+1<10)
arr[pos+1]=value+1;
arr[pos+2]=-1;
int intvalue=IntValueOfArr(arr);
if(intvalue<=x)
cout<<intvalue<<" ";

if(value-1>=0)
arr[pos+1]=value-1;
arr[pos+2]=-1;
intvalue=IntValueOfArr(arr);
if(intvalue<=x)
{cout<<intvalue<<" ";}
else{
    return ;
}

func(x,arr,pos+1,value+1);
func(x,arr,pos+1,value-1);    
    
    
}
void showJumpingNos(int x){

int *arr=new int[1000];
cout<<0<<" ";
    for(int i=1;i<10;i++)
    {
        arr[0]=i;
        cout<<i<<" ";
        func(x,arr,0,i);
    }
}

int main(int argc, char const *argv[])
{
    showJumpingNos(89999);
    return 0;
}
