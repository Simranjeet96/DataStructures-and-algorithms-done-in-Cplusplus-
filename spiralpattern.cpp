#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n]={0};
       int i=0,j=0,var=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }

    i=0;
    j=0;

    while(1)
    {
        if(var==n*n+1){break;}
        while(arr[i][j]==0&&i<=n-1&&j<=n-1&&i>=0&&j>=0)
        {
            arr[i][j]=var;
            j++;
            var++;
        }
    //    var=var-1;
        i=i+1;
        j=j-1;
        if(var==n*n+1){break;}
        while(arr[i][j]==0&&i<=n-1&&j<=n-1&&i>=0&&j>=0)
        {
            arr[i][j]=var;
            i++;
            var++;
        }
        i=i-1;
      //  var=var-1;
        j=j-1;
        if(var==n*n+1){break;}
        while(arr[i][j]==0&&i>=0&&j>=0)
        {
            arr[i][j]=var;
            j--;
            var++;
        }
        j=j+1;
        //var=var-1;
        i=i-1;
        if(var==n*n+1){break;}
        while(arr[i][j]==0&&i>=0&&j>=0)
        {
            arr[i][j]=var;
            i--;
            var++;
        }
        i=i+1;
        //var=var-1;
        j=j+1;
        if(var==n*n+1){break;}
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
