#include<iostream>
using namespace std;
void stringCompression(char input[]) {
    // Write your code here
int i=0,j=0,m,l;
int a=0,k=0;
while(input[i]!='\0')
{
    if(input[i]==input[i+1])
    {
        a=a+1;
        i++;
            continue;
    }
    else{
            if(a!=0)
        {
            a++;
            input[j]=input[i];
        j++;
        m=a;
        k=0;
    while(m!=0)
    {
        k++;
        m=m/10;
    }
        for(l=k-1;l>=0;l--)
        {
            input[j+l]=(a%10)+'0';
        a=a/10;

        }
        i++;
        j=j+k;}
        else{
            input[j]=input[i];
            j++;i++;
        }
    }
    a=0;

}
input[j]='\0';

}
int main()
{
    char arr[]="aaaaaaaaaaaaaaabbbbbbbbsss";
    stringCompression(arr);
    cout<<arr;

    return 0;
}
