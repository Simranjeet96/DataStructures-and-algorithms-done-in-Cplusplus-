#include<stdio.h>
#include<conio.h>
int arr[200];

void fact(int n)
{
    if(n==1){return ;}
    int i,j;
    for(i=0;i<200;i++)
    {
        arr[i]=arr[i]*n;}
    for(i=0;i<200;i++)
    {while(arr[i]>9)
    {
        int k=arr[i];
        for(j=i;k!=0;j++)
        {
            if(j==i){arr[j]=k%10;}
            else
            {arr[j]=arr[j]+k%10;}
            k=k/10;
        }
    }
    }

    fact(n-1);
}
void main()
{
    int i=199;
    arr[0]=1;
    fact(100);
while(arr[i]==0)
{
    i--;
}
for(;i>=0;i--)
{
    printf("%d",arr[i]);
}
}
