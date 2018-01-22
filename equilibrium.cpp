#include<iostream>
using namespace std;
int main()
{
    int n=6;
 int arr[6]={5,1,1,3,4,-1};
    int i=1;
    int j=0;
    int lsum=0,rsum=0;
        for(j=0;j<i;j++)
        {
            lsum=arr[j]+lsum;
        }
        for(j=i+1;j<n;j++)
        {
            rsum=rsum+arr[j];
        }
        int k=0;
        if(lsum>rsum){return -1;}
    while(i<n-1)
    {
        if(lsum==rsum){
                return i;
                break;
        }
        else if(lsum<rsum)
        {
            if(k==10){return -1;}
            lsum=lsum+arr[i];
            rsum=rsum-arr[i+1];
            i++;

        }
        else{
                k=10;
         lsum=lsum-arr[i-1];
         rsum=rsum+arr[i];
         i--;
        }
    }
}
