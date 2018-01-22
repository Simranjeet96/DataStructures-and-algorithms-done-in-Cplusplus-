#include <vector>
#include<iostream>
using namespace std;
/*int maxx=0;
int sum=0;
vector<int> final;
void func(vector<int> input,vector<int> output,int i=0,int j=0)
{
    if(j==input.size()-1)
    {
        sum=0;
        for(int i=0;i<output.size();i++)
        {
            sum=sum+output[i];
        }
        if(sum%3==0&&sum>maxx)
        {
            maxx=sum;
            int i=0;
            for( i=0;i<output.size();i++)
            {
                final[i]=output[i];
            }
            while(final.size()!=output.size())
            {
                final.pop_back();
            }

        }
        return ;
    }
    output[i]=input[j];
    func(input,output,i+1,j+1);

    func(input,output,i,j+1);
}

vector<int> largestMultiple3(vector<int> input) {
    // Write your code here
vector<int> output;
func(input,output,0,0);
return final;


}
int main()
{
    vector<int> input;
    input[0]=1;
    input[1]=5;
    input[2]=7;
    input[3]=9;
    largestMultiple3(input);



    return 0;
}
*/
    void func1(int n,int& given)
    {
        if(n==0)
        {
            cout<<given<<endl;
            return;
        }
//        int& given=given;

        if(n%10==8||n%10==5)
        {
            func1(n/10,given);
        }

    }
    bool func2(int n)
    {
        if(n/10==0)
        {
            if(n%10==8||n%10==5)
            {
                return true;
            }
            return false;
        }

    bool smalloutput=func2(n/10);

    return ((n%10==8||n%10==5)&&smalloutput==true);

    }


    int main()
    {
        for(int i=1;i<1000;i++)
        {
            func1(i,i);
            if(func2(i))
            {
                cout<<i<<endl;
            }
        }



    }









