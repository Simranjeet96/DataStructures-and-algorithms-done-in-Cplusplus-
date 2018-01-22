#include"sally.h"
#include<iostream>
using namespace std;
sally::sally(int a,int b)

{
c=a;
d=b;
    cout<<"hey i am constructor"<<a<< "  "<<b;
}


sally::~sally()
{
    cout<<"hey i am destructor";
}
