#include<stdio.h>
#include<conio.h>
int inv=0;
void swap(int* i,int* j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}
void sort(int* arr,int start,int end)
{
    int i,j;
    int n=end-start+1;
    for(i=0;i<n;i++)
    {
        for(j=0;i<(n-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }



}
void fun(int* arr,int ls,int le,int rs,int re)
{

    if((ls==le)||(rs==re)){return ;}
    sort(arr,ls,le);
    int i;
    for(i=rs;i<=re;i++)
    {
        int j=ls;
    while(j<=le)
    {
        if(arr[j]<arr[i]){j++;}
        else{
                inv=inv+(le-j+1);
                break;
        }
    }
    }


}
void divide(int* arr,int start,int end)
{
    if(start==end){return ;}
    int mid=(end-start)/2;

    divide(arr,start,mid);
    divide(arr,mid+1,end);
    if(end==start+1)
        {
            if(arr[start]>arr[end])
            {
            swap(&arr[start],&arr[end]);
            inv++;
            }
        }
    fun(arr,start,mid,mid+1,end);

}
void main()
{
    int arr[10]={5,2,9,8,6,7,3,4,0,1};
divide(arr,0,9);



}
