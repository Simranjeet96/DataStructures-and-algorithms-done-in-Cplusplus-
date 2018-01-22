# include <stdio.h>
 # include <conio.h>
 # include   <dos.h>

 int main( )
 {
    int iCount=15;
    int iMaxValue=128;
    unsigned char * ptrKeyboard=(unsigned char *)0x00400017;

    //clrscr( );

    printf("\nKeyboard Status Byte (Hex) = %X",*ptrKeyboard);
    printf("\nKeyboard Status Byte (Binary) = ");

    for(iCount=7;iCount>=0;iCount--)
    {
       if(iCount==3)
      printf(" ");

       if((*ptrKeyboard&iMaxValue)==iMaxValue)
      printf("1");

       else
      printf("0");

       iMaxValue/=2;
    }

    printf("\n\nWhere:");
    printf("\n Bit 7    Insert");
    printf("\n Bit 6    Caps Lock");
    printf("\n Bit 5    Num Lock");
    printf("\n Bit 4    Scroll Lock");
    printf("\n Bit 3    Alt Key");
    printf("\n Bit 2    Ctrl Key");
    printf("\n Bit 1    Left Shift");
    printf("\n Bit 0    Right Shift");

    getch( );
    return 0;
 }
