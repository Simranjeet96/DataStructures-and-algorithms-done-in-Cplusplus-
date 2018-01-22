#include<iostream>
using namespace std;
int main()
{
    char a='9';
    char * b="abc";
    char * ptr=&a;
    cout<<*ptr;
    ptr=b;
    string z="hello";
    cout<<endl<<b<<endl;
    cout<<ptr<<endl<<z;
    return 0;
}
