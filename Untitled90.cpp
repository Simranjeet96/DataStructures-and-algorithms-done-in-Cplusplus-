#include<iostream>
using namespace std;
void perimeter(int l,int b)
{
int c;
c=(2*l)+(2*b);
cout<<"perimetre is::"<<c;
}
void perimeter(int a)
{
int x;
x=4*a;
cout<<"perimeter is::"<<x;
}
void perimeter(int a,int b,int c)
{
int s;
s=a+b+c;
cout<<"perimeter is::"<<s;
}

int main()
{
//clrscr();
cout<<"1.perimeter of rectangle.\n";
cout<<"2.perimeter of square.\n";
cout<<"3.perimeter of triangle\n";
cout<<"4.exit";
int ch;
while(1){
cout<<endl<<"enter ur choice::";
cout<<endl;

cin>>ch;

switch(ch)
{
case 1:
{
int a,b;
cout<<"enter length and breadth of rectangle::";
cin>>a>>b;
perimeter(a,b);
break;
}
case 2:
{
int a;
cout<<"enter side of square::";
cin>>a;
perimeter(a);
break;
}
case 3:
{
int a,b,c;
cout<<"enter the side of triangle::";
cin>>a>>b>>c;
perimeter(a,b,c);
break;
}
case 4:
{
cout<<"wrong choice.";
break;
}
}
}
}
