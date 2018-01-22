#include<iostream>
using namespace std;
void mergetwo(int arr1[],int s1,int arr2[],int s2)
{
    int i=0,j=0,k=0;
    while(i<s1&&j<s2)
    {
        if(arr1[i]>arr2[j])
        {
            arr1[k]=arr2[j];
            j++;
            k++;
        }else if(arr1[i]<arr2[j])
        {
            arr1[k]=arr1[i];
            i++;
            k++;
        }else
        {
        arr1[k]=arr1[i];
        k++;i++;
        arr1[k]=arr2[j];
        k++;j++;
        }

    }
    while(i<s1)
    {
        arr1[k]=arr1[i];
        k++;i++;
    }
    while(j<s2)
    {
        arr1[k]=arr2[j];
        k++;j++;
    }

}
void mergesort(int arr[],int start,int endd)
{
    if(start==endd){return ;}
    int mid=(start+endd)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,endd);
    mergetwo(&arr[start],mid-start+1,&arr[mid+1],endd-mid-1+1);
}
int main()
{
    int arr[]={2,5,7,2,4,5,8,1,0};
    mergesort(arr,0,8);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}









