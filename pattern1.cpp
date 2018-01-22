#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int value;
    for(int i=0;i<n;i++)
    {
        value=n;
        int j=0,k=0;
        while(j<n)
            {
            for(;k<i;k++)
            {
                cout<<value;
                value=value-1;
                j++;
            }
            cout<<value;
            j++;
            }
            cout<<endl;
    }
return 0;
}
