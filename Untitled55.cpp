#include<iostream>
//#include<conio.h>
#inclue<cmath>
void main()
{
 clrscr();
 int d,i=0;
 while(2*i-log(i)-7<=0)
 {
  if(2*i-log(i)-7==0){cout<<i;return 0;}
  i++;
 }
 i--;
 cin>>d;
 float prec=0.1,sol=0;
 while(d--)
 {
   sol=i+prec;
   while(2*sol-log(sol)-7<0)
   {
   sol=sol+prec;
   }
   sol=sol-prec;
   prec=prec*0.1;
 }
cout<<sol;
 getch();
}
