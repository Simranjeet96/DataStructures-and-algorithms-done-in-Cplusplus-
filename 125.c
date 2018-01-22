#include <stdio.h>

int func()
{
     int i=0;
    i++;
    return i;
}

int main(void) {


 func();
 func();
printf("%d",func());



return 0;
}

