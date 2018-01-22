#include<iostream>
using namespace std;
swap(int* i,int* j)
{
    int temp=*i;
    *i=*j;
    *j=temp;

}


int partitionn(int a[],int si,int ei)
{
    int k=0;
    for(int j=si+1;j<=ei;j++)
    {
        if(a[si]>a[j])
        {
            k++;
        }

    }

    swap(&a[si],&a[si+k]);
    int p=si;
    int q=ei;
    while(p<=q)
    {
        if(a[p]<=a[si+k])
        {
            p++;
            continue;
        }
        else
            if(a[q]>a[si+k])
        {
            q--;
            continue;
        }
        else{
            swap(&a[p],&a[q]);
            p++;
            q--;
                }

    }

    return si+k;

}
void quicksort(int a[],int si,int ei)
{

    if(ei<=si)
    {
        return ;
    }
    int pindex=partitionn(a,si,ei);
    quicksort(a,si,pindex-1);
    quicksort(a,pindex+1,ei);

}
int main(){

    int arr[7]={6,4,5,6,8,3,2};

quicksort(arr,0,6);
for(int j=0;j<=6;j++)
{
    cout<<arr[j]<<" " ;
}



return 0;
}
