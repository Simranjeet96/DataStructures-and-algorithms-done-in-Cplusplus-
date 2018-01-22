#include<iostream>
using namespace std;

int num(int n,int arr[])//to determine no of bst possible with n elements
{
    int left,right;
    int sum=0;
    if(n==0)
    {
        return 1;
    }
    for(int i=1;i<=n;i++)
    {
  if(arr[i-1]==-1)
        {
             left=num(i-1);
        }
        else{
            left=arr[i-1];
        }
        if(arr[n-i]==-1)
        {
             right=num(n-i);
        }
        else{
            right=arr[n-i];
        }
    sum=sum+left*right;
    }
    arr[n]=sum;
    return sum;
}
int numOfBinTreeOfHeight(int h,int arr1[],int arr2[]);
int sum(int h,int arr1[],int arr2[])
{
    int ans=0;
    if(arr2[h]==-1)
    {
        for(int i=0;i<=h;i++)
        {
            ans=ans+numOfBinTreeOfHeight(i,arr1,arr2);
        }
    }
    else{
        return arr2[h];
    }

}
int numOfBinTreeOfHeight(int h,int arr1[],int arr2[])// h is height
{
    int ans;
    if(h<=0)
    {
        return 0;
    }
    if(arr1[h]==-1)
    {
        if(arr2[h-2]==-1){
        arr1[h]=2*(numOfBinTreeOfHeight(h-1,arr1,arr2)*sum(h-2,arr2))+numOfBinTreeOfHeight(h-1)*numOfBinTreeOfHeight(h-1);
      ans=arr1[h];
        }
        else{
        arr1[h]=2*(numOfBinTreeOfHeight(h-1,arr1,arr2)*arr2[h-2])+numOfBinTreeOfHeight(h-1)*numOfBinTreeOfHeight(h-1);
      ans=arr1[h];
        }
    }
    else{
        ans=arr1[h];
    }
    return ans;
}
int LCS(int s1,int s2,char arr1[],char arr2[])
{

    if
    LCS(s1)


}

int main()
{

}
