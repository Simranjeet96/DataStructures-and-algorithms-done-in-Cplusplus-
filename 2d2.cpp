#include<bits/stdc++.h>
using namespace std;


class InfInt{
public:
    string integer;
    int len;
    InfInt(string integer){
        this->integer=integer;
        len=integer.length();
    } 
    string decrement(){
        
        if(this->check()){
        int i=len-1;
        while(integer[i]=='0'&&i>=0){
            integer[i]='9';
            i--;
        }
        if(i!=0){
            integer[i]=integer[i]-1;
        }
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


bool comp(string a, string b) {
    int lenOfa=a.length();
    int lenOfb=b.length();
    int minLen=min(lenOfb,lenOfa);
    int i=0;
    while(i<minLen){
        if(a[i]==b[i]){
            i++;
        }else{
            return a[i]<b[i];
        }
    }
    if(i==minLen){
        if(lenOfa>lenOfb){
            return false;
        }else{
            return true;
        }
    }

}



int main(){
int length;
    string NoOfqueries;
    string a;
    string temp;
    vector<string> v;
    map<string,int> m;
    int VectorSize;
    int temporary=0;
    int query;
cin>>length;
cin>>NoOfqueries;
    cin>>a;
    InfInt obj(NoOfqueries);
    
    for(int i=0;i<length;i++){
        for(int j=i;j<length;j++){
            temp=a.substr(i,j-i+1);
            if(m.count(temp)==0)
            {
                m[temp]=1;
                v.push_back(a.substr(i,j-i+1));
            }
        }
    }
    sort(v.begin(),v.end(),comp);
    VectorSize=v.size();
    cout<<obj.integer<<endl;
    length=0;
    while(obj.check())
    {
        // cout<<"hi there"<<obj.integer<<endl;
        // cin>>query;
        // if(query<=VectorSize)
        // {
        //     m.clear();
        //     temporary=0;
        //     length=v[query-1].length();
        //     for(int j=0;j<length;j++){
        //         if(m.count(v[query-1].substr(j,1))==0)
        //             {
        //                 m[v[query-1].substr(j,1)]=1;
        //                 temporary++;
        //             }
        //     }
        //     cout<<temporary<<endl;
        // }
        // else{
        //     cout<<-1<<endl;
        // }
        cout<<obj.integer<<endl;
        obj.decrement();
    }
}