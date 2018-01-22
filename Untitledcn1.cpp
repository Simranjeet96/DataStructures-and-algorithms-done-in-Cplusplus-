#include<iostream>
using namespace std;
int main()
{
    long double n;
    int d;
    cin>>n>>d;
     int i;
     if(n==0){cout<<0;return 0;}
     if(n==1){cout<<1;return 0;}
    long double var;
    for(i=1;i<=n/2;i++)
    {
        if(n-(i*i)>=0)
        {
            if(n-(i*i)>0){var=i;}
            else if(n-(i*i)==0){cout<<i;return 0;}
        }
    }


    long double k=var+1;
    long double l=1.0000000000000/100000000;

    while(var<k)
    {

        if(n>=(var*var))
        {
        var=var+l;
        }else{break;}

    }
    var=var-l;
    i=d;
    while(i--)
    {
        var=var*10;
    };
    i=var;
    var=0.00000000;
    var=i;
    i=0;
    while(i!=d)
    {
       var=var/10.0;
       i++;

    };


    cout<<var;
    return 0;
}
