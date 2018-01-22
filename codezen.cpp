#include <iostream>
using namespace std;

int main() {
    char c;
    int digits=0,whitespace=0,other=0;
    c=cin.get();
    while(c!='$')
    {
        if('0'<=c&&c<='9'){digits++;}
        else if(c=='\t'||c=='\n'||c==' '){whitespace++;}
        else{other++;}

        c=cin.get();

    }
    cout<<digits<<" "<<whitespace<<" "<<other;



	return 0;
}
