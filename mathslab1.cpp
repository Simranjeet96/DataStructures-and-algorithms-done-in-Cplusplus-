#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void print(float,int);
int main()
{
int d,i=1;
while(2*i-log(i)-7<=0)
{
if(2*i-log(i)-7==0){cout<<i;return 0;}
i++;
}
i--;
cout<<i<<endl;
cin>>d;
float prec=0.100000,sol=0.000;
while(d--)
{
sol=i+prec;
while(2*sol-log(sol)-7<0)
{
sol=sol+prec;
}
sol=sol-prec;
prec=prec*0.1;
}
cout<<sol<<endl;
//print(sol,d);
return 0;
}
void print(float sol,int d)
{
float i=sol;
cout<<(int)i;
cout<<".";
int j;
while(d--)
{
    i=i*10;
    j=i;
    cout<<j%10;
}
}
