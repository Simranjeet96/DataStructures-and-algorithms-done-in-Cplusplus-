#include<iostream>
using namespace std;
void fun(int arr[])
{

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(int*);


}
int main()
{
   int arr[3]={1,3,4};
   fun(arr);
    return 0;
}
