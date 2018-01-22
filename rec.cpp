#include<iostream>
using namespace std;

int fun(int a,int* p)
{
    if(a/10==0)
    {
        if(a==0){*p=*p+1;}
        return *p;
    }

    int smallans=fun(a/10,p);
    if(a%10==0)
    {
        *p=*p+1;
    }
    return *p;

}

int main()
{
    int i=0;
    int* p=&i;
    int j;
    cin>>j;
cout<<    fun(j,p);


}
