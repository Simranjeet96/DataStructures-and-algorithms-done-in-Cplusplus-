#include<iostream>
using namespace std;
int main()
{
int* ptr=new int(2);
int* ptr1=ptr;
delete ptr;
delete ptr1;
    return 0;
}
