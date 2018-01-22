#include<iostream>
#include<cstdlib>
using namespace std;
const void fun(void){cout<<"hello";}
int main()
{
    fun();
    srand(12);
    cout<<rand();
    return 0;
}
