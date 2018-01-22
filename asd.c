#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
bool check(int* arr,int start,int end)
{
    if (start==end){
        return true;
    }
    int i,j;
    for(i=start;i<end;i++)
    {
        for(j=i+1;j<=end;j++)
        {
            if(arr[i]==arr[j]){return false;}
        }
    }
    return true;
}
int main()
{
int n,i;
scanf("%d",&n);
int* arr=(int*)malloc(sizeof(int)*4);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
i=0;
int sum=0,j=0;
while(i<n)
{
    j=0;
    while(j+i<n)
    {
        if(check(arr,j,j+i))
        {
            sum=sum+i+1;
        }
        j++;
    i++;
    }



    printf("\n%d",sum);



}








return 0;
}
