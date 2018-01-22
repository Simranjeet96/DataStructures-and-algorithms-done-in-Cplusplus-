#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void swap(int* i,int* j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}
float med(int* arr,int n)
{
    int mid;

        if(n%2==0){
           float k;
           mid=n/2;
           k=(arr[mid-1]+arr[mid])/2.00;
           return k;
        }
        else
            {
                mid=n/2;
                return (float)arr[mid];
            }
}
void sort(int* arr,int n)
{
    int i,j;
    if(n==1){return ;}
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }


}
int main()
{
    int n,i;
    scanf("%d",&n);
    int* arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sort(arr,i+1);
        printf(" \n%f    ",med(arr,i+1));

    }

    return 0;
}
