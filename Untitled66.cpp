#include <iostream>
#include <ctime>
#include<conio.h>
//#include<system>
using namespace std;

inline void inlineFunction()
{
    int loopCounter = 0;
     while(loopCounter<100 )
     {
         loopCounter++;
         cout<<"Inline loop "<<loopCounter<<" \n";
     }
}

void regularFunction()
{
    int loopCounter = 0;
     while(loopCounter<100 )
     {
         loopCounter++;
         cout<<"regular  "<<loopCounter<<" \n";
     }
}

int main()
{

    int start;
    int end;
    int duration;

    cout << "Running inline function  ..." << endl;
    start = clock();

     inlineFunction();

    end = clock();
    duration = end - start;
    cout << "Time elapsed: " << duration << " ticks. \n" << endl;

    cout << "Running function  ..." << endl;
    start = clock();

    regularFunction();

    end = clock();
    duration = end - start;
    cout << "Time elapsed: " << duration << " ticks.\n" << endl;
getch();
    //system("pause");
    return 0;
}
