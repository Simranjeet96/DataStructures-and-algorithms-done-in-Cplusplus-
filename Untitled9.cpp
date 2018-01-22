#include<stdio.h>
#include<conio.h>
int ceil(double k)
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
    int i,tp=0,j,arr[ch];
    for(i=0;i<ch;i++)
    {
        scanf("%d",&arr[i]);
        tp=tp+arr[i];
    }
    int pgarr[tp];
    int iarr[tp];
    int l=0,pg=0;
    for(i=0;i<ch;i++)
    {
        for(j=0;j<arr[ch];j++)
        {
            iarr[l]=j+1;
            pgarr[l]=pg+ceil((j+1)/k);
            l++;
        }
    pg=pgarr[l-1];

    }
    j=0;
    for(i=0;i<tp;i++)
    {
        if(iarr[i]==pgarr[i]){j++;}
    }
    printf("\n\n%d",j);

    return 0;
}
