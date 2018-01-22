#include<stdio.h>
#include<conio.h>
void copy(int* arrf,int* arrt)
{

    while((*arrf)!=0)
    {
        *arrt=*arrf;
        arrf++;
        arrt++;
}
}
void print(int* arr)
{
    printf("\n");
    while((*arr)!=0)
    {
        printf("%d",*arr);
        arr++;
    }
    printf("\n");
}
int main()
{
/*
1
11
21
1211
111221
*/
int n,i;
int arr1[15]={0};
int arr2[15]={0};
scanf("%d",&n);
arr1[0]=1;
printf("%d",arr1[0]);
for(i=0;i<(n-1);i++)
{
    int j=0,a=1,k=0;
    while(arr1[j]!=0)
    {

        if(arr1[j]==arr1[j+1])
        {
            a++;
            j++;
        }
        else
        {
        arr2[k]=a;
        a=1;
        ++k;
        arr2[k]=arr1[j];
        ++k;
        j++;
        }
    }
    copy(arr2,arr1);
    print(arr1);
}
return 0;
}
