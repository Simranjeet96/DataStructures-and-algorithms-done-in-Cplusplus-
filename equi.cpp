#include<iostream>
using namespace std;



// arr - input array
// n - size of array

int equilibrium(int arr[], int n) {
	// Write your code here
int k=-1;
int j=0;
int lsum=0;
int rsum=0;
for(int i=0;i<n;i++)
{
    rsum=rsum+arr[i];
}
int m=9;
while(lsum!=rsum)
{
if(lsum>rsum)
{
    if(m==11)
    {
        return k;
    }
    m=10;

}
else{
    m=11;
}
   if(k<n-1){ rsum=rsum-arr[k+1];}
    if(k!=-1){lsum=lsum+arr[k];}
    k++;


}
return k;


}
int main()
{
    int arr[7]={-7,1,5,2,-4,3,0};
    cout<<equilibrium(arr,7);


    return 0;
}
