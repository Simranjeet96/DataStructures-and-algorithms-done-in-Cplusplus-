#include<iostream>
using namespace std;
int binary(int arr[],int si,int ei,int n)
{
    if(si>ei)
    {
        return -1;
    }


    if(n==arr[(si+ei)/2])
    {
        return (si+ei)/2;
    }
    else{
        if(n>arr[(si+ei)/2])
        {
            binary(arr,((si+ei)/2)+1,ei,n);
        }
        else{
            binary(arr,0,((si+ei)/2)-1,n);
        }

    }

}
int main()
{
    int arr[5]={0,3,7,4,5};
    cout<<binary(arr,0,4,7);

}
