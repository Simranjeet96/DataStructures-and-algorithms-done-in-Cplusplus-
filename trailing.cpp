#include<iostream>
#include<ostream>
using namespace std;
int main(){
ostringstream os;
os << "dec: " << 15 << " hex: " << std::hex << 15 << endl;
cout<<os.str()<<endl;
}
