#include <stdio.h>
#include<time.h>
//#include<string.h>
int main()
{
   char str[50];
printf("%d",clock());
   printf("Enter a string : ");
   gets(str);

   printf("You entered: %s", str);

   return(0);
}
