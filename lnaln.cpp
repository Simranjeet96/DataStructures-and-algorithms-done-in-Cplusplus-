#include<bits/stdc++.h>
using namespace std;
int toint(string arr)
{
  int sum=0;
  int len=arr.length();
  for(int i=0;i<len;i++)
  {
    sum=sum+(arr[len-i-1]-'0')*pow(10,i);
  }
  
  return sum;
}

void func(int n,string arr="")
{
  if(toint(arr)<=n)
  {
    if(arr.length()!=0)
    cout<<arr<<endl;
  }else{
    return ;
    
  }
  string arr1=arr;
  func(n,arr1+"2");
  func(n,arr+"5");
  
  return ;
  
  
}

void printSequence(int n)
{
    //write your code here
	func(n);

}
int main()
{
  printSequence(500);
  return 0;
}