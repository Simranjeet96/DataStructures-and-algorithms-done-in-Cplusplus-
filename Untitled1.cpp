#include<iostream>
using namespace std;
void swap(char* i,char* j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}
void func(char arr[])
{
    int s=0;
    while(arr[s]!='\0')
    {
        s++;
    }
       int i=0,j=0,k=0;
    while(j<=s)
    {
        while(arr[j]!=' '&&j<s)
        {
            j++;
        }
           k=j-1;
        while(i<k)
        {
            swap(&arr[i],&arr[k]);
            i++;
            k--;
        }
        i=j+1;
        j=j+1;
    }
}



int main()
{
    char arr[100];
    cin.getline(arr,100);
    func(arr);
    int i=0;
    while(arr[i]!='\0')
    {
           cout<<arr[i];
            i++;
    }
}
