#include<iostream>
#include<cmath>
using namespace std;
long long int dtob(long long int a)
{

if(a==0){return 0;}
if(a==1){return 1;}
long long int sum=0;
int temp=0,i=0;
while(a!=1)
{
    temp=a%2;
    sum=sum+temp*pow(10,i);
    a=a/2;
    i++;


}
sum=sum+1*pow(10,i);
return sum;

}
int main()
{
    long long int n;
cin>>n;

cout<<dtob(n);


    return 0;
}
