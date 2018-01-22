#include<iostream>
using namespace std;
void print(int arr[][100],int m,int n)//m rows and n columns
{
    int col=0;
    while(col<n)
    {
        if(col%2==0)
        {
        for(int i=0;i<m;i++)
        {
            cout<<arr[i][col]<<" ";
        }
        }else{
        for(int i=m-1;i>=0;i--)
        {
            cout<<arr[i][col]<<" ";
        }
        }
        col++;
    }
}
int main()
{
    int arr[100][100];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {

            cin>>arr[i][j];
        }
    }
    print(arr,m,n);
    return 0;
}
