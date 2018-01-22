#include<iostream>
using namespace std;
void printrow(int arr[][100],int rowno,int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[rowno][i]<<" ";
    }
}
int main()
{
    int arr[100][100];
    int m,n;
    cin>>m>>n;
     cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<m;j++)
  for(int i=0;i<m-j;i++)
    {
        printrow(arr,j,n);
        cout<<endl;

    }
}
