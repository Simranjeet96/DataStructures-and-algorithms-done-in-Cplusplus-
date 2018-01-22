// arr - input array
// size - size of array
// x - sum of triplets
#include<iostream>
using namespace std;
void sort(int* arr,int size)
{
    int temp;
    for(int i=1;i<=size-1;i++)
    {
        for(int j=0;j<size-i;j++)
        {
        if(arr[j]>arr[j+1]){
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }

        }
    }

}
void FindTriplet(int arr[], int size, int x) {
	// Write your code here
	sort(arr,x);
for(int i=0;i<=size-3;i++)
{
    for(int j=i+1;j<=size-2;j++)
    {
    for(int k=j+1;k<=size-1;k++)
    {
    if(arr[i]+arr[j]+arr[k]==x){
cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
        cout<<endl;
    }
    }
    }
}
}
/* 7
2 5 7 2 9 1 4
12 */

int main()
{
    int arr[7]={2 ,5 ,7 ,2 ,9 ,1 ,4};
   FindTriplet(arr,7,12);


    return 0;
}
