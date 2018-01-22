#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void swap(int* i,int* j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}
int main()
{
    int i,j,k;
    int arr[6]={5,2,8,4,9,0};
    int min=0;
    for(i=0;i<6;i++)
    {
        min=i;
        for(j=i;j<6;j++)
        {

            if(arr[j]<arr[min]){min=j;}
        }
        swap(&arr[i],&arr[min]);
        for(k=0;k<6;k++){printf("%d\t",arr[k]);}
    printf("\n");

    }
    for(i=0;i<100;i++)
{

delay(100);
    printf("%d\t",i);
}

printf("\n fire!!");
    return 0;
}
