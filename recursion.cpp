#include<iostream>
#include<cstring>
using namespace std;

void func(char arr[],int i,char temp[],int j,int arrlen,int nctp)//nctp-no of char to print
{
    if(i==arrlen)
    {
        return ;
    }


        if(j==nctp)
        {
            temp[j]='\0';
            cout<<temp<<endl;
        }
        else
        {
            temp[j]=arr[i];
        func(arr,i,temp,j+1,arrlen,nctp);

        func(arr,i+1,temp,j,arrlen,nctp);
        }

}
int main()
{
    char arr[]="simranjet";
    int arrlen=strlen(arr);
    cout<<arrlen<<endl;
    char temp[100];
    func(arr,0,temp,0,arrlen,4);
    return 0;
}
