#include<iostream>
using namespace std;
void func(char arr[],int s) //s-size of string
{
    int i=0,j=0;
    while(i<=s-1)
    {
        if(arr[i]==arr[i+1])
        {
            i++;
        }
        else{
            arr[j]=arr[i];
            i++;
            j++;
        }
    }
arr[j]='\0';
}
int main()
{
int i=0,j=0;
char arr[100];
cin>>arr;

 while(arr[j]!='\0')
    {
        j++;
    }
    i=0;
    func(arr,++j);

 while(arr[i]!='\0')
    {
        cout<<arr[i];
        i++;
    }
return 0;
}
