#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int ceiling(double k)
{
    int i=k;
    double j=k-i;
        if (j==0){return i;}
        else {return i+1;}
}


int main()
{
    int ch,k;
    scanf("%d %d",&ch,&k);
    int i,tp=0,j;
    int* arr=(int*)malloc(sizeof(int)*ch);
    for(i=0;i<ch;i++)
    {
        scanf("%d",&arr[i]);
        tp=tp+arr[i];
    }

    int* pgarr=(int*)malloc(sizeof(int)*tp);
    int* indarr=(int*)malloc(sizeof(int)*tp);;
    int l=0,pg=0;
    for(i=0;i<ch;i++)
    {
        for(j=0;j<arr[ch];j++)
        {
            indarr[l]=j+1;
            pgarr[l]=pg+ceiling((j+1)/k);
            l++;
        }
    pg=pgarr[l-1];

    }
    j=0;
    for(i=0;i<tp;i++)
        {
        printf("%d %d\n",indarr[i],pgarr[i]);
        }
    for(i=0;i<tp;i++)
    {
        if(indarr[i]==pgarr[i]){j++;}
    }
    printf("\n\n%d",j);

    return 0;
}
