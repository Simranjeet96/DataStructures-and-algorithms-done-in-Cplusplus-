#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 unsigned int n,d;
 cin>>n>>d;
 if(n==0){cout<<0;return 0;}
 if(n==1){cout<<1;return 0;}
 int i;
 int var;
 for(i=1;i<=n/2;i++)
 {
     if(n-(i*i)>0)
     {
         var=i;
     }else if(n-(i*i)==0){cout<<i;return 0;}
 }
 i=d+1;
 float temp1=1;
 while(i!=0)
 {
     temp1=temp1/10;
     i--;
 }
 float temp2=1;
 i=0;
 while(temp2!=temp1)
 {
     temp2=temp2/2;
     i++;
 }
 temp1=var;
 temp2=var+1;
int k=0;
while(var!=0){var=var/10;k++;}
 while(i--)
 {
   if(n-(((temp1+temp2)/2.0)*((temp1+temp2)/2.0))>0)
   {
       temp1=((temp1+temp2)/2.0);
       if(i==0){cout<<setprecision(d+k)<<temp1;}
   }else
   if(n-(((temp1+temp2)/2.0)*((temp1+temp2)/2.0))<0)
   {
       temp2=((temp1+temp2)/2.0);
       if(i==0){cout<<setprecision(d+k)<<temp2;}
   }else{
   cout<<setprecision(d+k)<<((temp1+temp2)/2.0);
   }



 }






    return 0;
}
