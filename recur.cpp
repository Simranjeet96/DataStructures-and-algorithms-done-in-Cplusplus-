#include<iostream>
using namespace std;
void func(int n,int i,int temp[])
{
    char x;
    if(n==0)
    {
        for(int k=i-1;k>=0;k--)
        {
            x=temp[k]+96;
            cout<<x<<", ";
        }
        cout<<endl;
        return ;
    }

    temp[i]=n%10;
    func(n/10,i+1,temp);
    if(n%100>9){
        temp[i]=n%100;
        func(n/100,i+1,temp);
    }


}
int main()
{
    int temp[10];
   int n;
   cin>>n;
    func(n,0,temp);



}
