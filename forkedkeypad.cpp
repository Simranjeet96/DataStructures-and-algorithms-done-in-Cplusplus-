#include<iostream>
using namespace std;

char temp[100];
char arr1[]="";
char arr2[]="abc";
char arr3[]="def";
char arr4[]="ghi";
char arr5[]="jkl";
char arr6[]="mno";
char arr7[]="pqrs";
char arr8[]="tuv";
char arr9[]="wxyz";
char arr0[]="";

char* address(int i)
{

    switch(i)
    {
    case 0:
        return arr0;
    case 1:
        return arr1;
    case 2:
        return arr2;
    case 3:
        return arr3;
    case 4:
        return arr4;
    case 5:
        return arr5;
    case 6:
        return arr6;
    case 7:
        return arr7;
    case 8:
        return arr8;
    case 9:
        return arr9;
    }
}
int rowno=0;
int keyPad(int n, char output[][100],int callno=0)
{
if(n==0)
{
    int i=0;
    while(i<callno)
    {
        output[rowno][i]=temp[callno-1-i];
        i++;
    }
    output[rowno][i]='\0';
    rowno++;
}
char * p=address(n%10);
for(int i=0;*(p+i)!='\0';i++)
{

    temp[callno]=*(p+i);
    keyPad(n/10,output,callno+1);

}

}
