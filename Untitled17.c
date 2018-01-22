#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j;
   char a;
    printf("here is your pattern Aniket!!!\n");
   for(i=0;i<10;i++)
   {
       a='A';
       for(j=0;j<7;j++)
       {
           if(j>6-i){printf(" ");}
           else{printf("%c",a+j);}
       }
       j=j-2;
       while(j>=0)
       {
           if(j>6-i){printf(" ");}
           else{printf("%c",a+j);}
        j--;
       }
printf("\n");
   }


    return 0;
}
