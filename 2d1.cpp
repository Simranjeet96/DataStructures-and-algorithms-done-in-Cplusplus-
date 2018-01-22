#include<bits/stdc++.h>
using namespace std;

class InfInt{
public:
    string integer;
    int len;
    InfInt(string integer){
        this->integer=integer;
        len=(this->integer).length();
    } 
    string decrement(){
        
        if(this->check()){
        int i=len-1;
        while(integer[i]=='0'&&i>0){
            integer[i]='9';
            i--;
        }
        if(integer[i]!='0')
        integer[i]=integer[i]-1;
        
        return integer;
    }
    return integer;
    }
    bool check(){
        for (int i = 0; i < len; ++i)
        {
            if(integer[i]!='0'){
                return true;
            }
        }
        return false;
    }

};


int main(){
    
    InfInt obj("3");

    while(obj.check()){
        cout<<obj.integer<<endl;
        obj.decrement();
    }
    //cout<<obj.check();

    return 0;
}   