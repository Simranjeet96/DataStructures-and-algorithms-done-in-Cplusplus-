#include<iostream>
using namespace std;

class complexno{

    int a;
    int b;
public:
    complexno()
    {
        a=0;
        b=0;
    }
    complexno(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void add(complexno obj)
    {
        this->a= this->a + obj.a;
        this->b=this->b + obj.b;
    }
    void multiply(complexno obj)
    {
        cout<< (this->a)*(obj.a)-(this->b)*(obj.b);
        cout<<(this->a)*(obj.b)+(this->b)*(obj.a);
    }
    void print()
{
    cout<<this->a<<"+ i"<<this->b<<endl;
}

};
int main(){
complexno a(3,5);
complexno b(1,2);
a.add(b);
a.print();
a.multiply(b);
a.print();



return 0;
}
