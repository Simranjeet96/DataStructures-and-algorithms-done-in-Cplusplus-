#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int* arr;
void swap(int* i,int* j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}
void heapsort()
{
    int i,j,n;
    printf("enter no of elements");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
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
/*void sort(int* arr,int n)
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


}*/
int main()
{
    int n,i;
    scanf("%d",&n);
    int* arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        heapsort();
        printf("%.1f\n",med(arr,i+1));

    }

    return 0;
}
