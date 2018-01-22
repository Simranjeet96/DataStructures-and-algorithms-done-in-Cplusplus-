#include<stdio.h>
#include<conio.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
#define size 10
char arr[10]="simranjeet";

void swap(char* i,char* j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}
void permutate(int index,char arr[])
{
    int i;
    if(index==(size-1))
    {
        for(i=0;i<size;i++){

        printf("%c",arr[i]);
        }
        printf("\n");delay(1000);
        return ;
    }

    for(i=index;i<size;i++)
    {
        swap(&arr[index],&arr[i]);
        permutate(index+1,arr);
        swap(&arr[index],&arr[i]);
    }
}

int main()
{

    permutate(0,arr);

    return 0;
}
