#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
     int i;
     if(n==0){cout<<0;return 0;}
     if(n==1){cout<<1;return 0;}
     float var;
    for(i=1;i<=n/2;i++)
    {
        if(n-(i*i)>=0)
        {
            if(n-(i*i)>0){var=i;}
            else if(n-(i*i)==0){cout<<i;return 0;}
        }
    }
     i=d;
    float j=1;
    while(i--)
    {
        j=j/10;
    }
    float k=j*10;
    float l=j;

    while(j<k)
    {

        if(n-(var*var)>0)
        {
        var=var+j;
        j=j+l;
        }else{break;}

    }
    cout<<var;
    return 0;
}
