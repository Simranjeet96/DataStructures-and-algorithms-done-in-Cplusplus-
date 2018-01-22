#include<stdio.h>
#include<conio.h>
int k=1;
void* fun(int a)
{

    if(a==1){return 1;}

    return &(a*fun(a-1));


}
void main()
{
    fun(100);
}
