#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void swap(int* i,int* j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}
void heapify(int* arr,int r,int n)//n total elements
{
    int largest=r;
    if((2*r+1<n)&&arr[2*r+1]>arr[largest])
    {
        largest=2*r+1;
    }
    if((2*r+2<n)&&arr[2*r+2]>arr[largest])
    {
        largest=2*r+2;
    }
    if(largest!=r)
    {
        swap(&arr[r],&arr[largest]);
        heapify(arr,largest,n);
    }
}
int main()
{
    int i,j,n;
    printf("enter no of elements");
    scanf("%d",&n);
    int* arr=(int*)malloc(sizeof(int)*n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(j=n;j>0;j--)
    {
        for(i=(j/2)-1;i>=0;i--)
        {heapify(arr,i,j);}
        swap(&arr[0],&arr[j-1]);
    }
for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}

    return 0;
}
