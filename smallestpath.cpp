#include<iostream>
using namespace std;
int l=0;
int smallestpath(int arr[5][5],char output[100],int x=0,int y=0)
{
   if(x==4&&y==4)
   {
       return 0;
   }
   int i=100,j=100;
   if(x!=4&&arr[y][x+1]!=-1)
   {
       i=1+smallestpath(arr,output,x+1,y);
   }
   else if(y!=4&&arr[y+1][x]!=-1)
   {
       j=1+smallestpath(arr,output,x,y+1);
   }
    int minsteps=((i<=j)?i:j);
    if(minsteps==i)
    {
        output[l]='r';
        l++;
    }
    else
    {
        output[l]='d';
        l++;
    }

    output[l]='\0';
    return minsteps;

}
int main()
{
    int arr[5][5]={
    {
        1,1,1,1,1
    },

    {
        1,-1,1,-1,1
    },
    {
        1,1,1,1,1
    },
    {
        -1,-1,1,1,1
    },
    {
        1,1,1,1,1
    }
    };
    //int arr[5][5]={0};
    char output[100];

    cout<<smallestpath(arr,output,0,0);
cout<<output;
}
