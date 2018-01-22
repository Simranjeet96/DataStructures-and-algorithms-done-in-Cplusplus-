#include<stdio.h>
#include<conio.h>
void swap(int* i,int* j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
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
void main()
{
    int i,arr[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,10);
        for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }


}
