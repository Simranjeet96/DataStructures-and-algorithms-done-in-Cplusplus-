#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    int j=0,k=n-1;
   int count0=0,count1=0;
    while(i<n)
    {
        cin>>arr[i];
        if(arr[i]==0)
            {
                count0++;
            }
        else{
            count1++;
        }
        i=i+1;
    }
      if(count0>count1)
     {
     while(count0!=count1)
      {
     if(arr[k]==0)
     {
         k--;
         count0--;
     }
     else if(arr[j]==0)
          {
              j++;
              count0--;
          }
          else {
            k--;
            count1--;
          }

      }
     }
      else {
            if(count0<count1)
     {
     while(count0!=count1)
      {
     if(arr[k]==1)
     {
         k--;
         count1--;
     }
     else if(arr[j]==1)
          {
              j++;
              count1--;
          }
          else {
            k--;
            count0--;
          }

      }
     }
      }

    cout<<endl;
while(j<=k)
{
    cout<<arr[j];
    j++;
}

}
