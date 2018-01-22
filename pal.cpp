#include<iostream>
using namespace std;
bool checkpalindrome(char arr[],int i,int j)
{
    while(i<j)
    {
        if(arr[i]==arr[j])
        {
            i++;j--;
        }else {return false;}
    }

    return true;
}


int main()
{
   char arr[]="simra";
   int j=1,k=0;
    while(j<(sizeof(arr)-1))
{
 if(checkpalindrome(arr,0,j))
 {
     k=j;
     j++;continue;
 }
 else{
    j++;
 }
}
cout<<" hi"<<k<<endl;
for(int i=(sizeof(arr)-2);i>k;i--)
{
    cout<<arr[i];
}
cout<<arr;
    return 0;
}
