#include<iostream>
using namespace std;

int countTrailingZerosInFact(int num){
	long long int i,c=0,f=0;
	for(i=1;i<=num;i++)
	{
		long long int j=i;
	    while(i%5==0)
	    {
    		c++;
    		i=i/5;
    	}



	    }
    return c;
}
int main()
{

    cout<<countTrailingZerosInFact(10);

    return 0;
}
