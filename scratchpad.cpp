#include <iostream>
using namespace std;

class C {
    public:
    int a;
    void func()
    {
        cout<<&a;
    }
    C() {
        a=10;
        cout<<"hello"<<endl;
        }
  C(  C & a) { std::cout << "A copy was made.\n"; }
};

C f() {
    C obj1;
    obj1.func();
    cout<<endl<<&obj1<<endl;
  return obj1;
}

int main() {
  std::cout <<"Hello World!\n";
  C obj(f());
  cout<<&obj;
  return 0;
}