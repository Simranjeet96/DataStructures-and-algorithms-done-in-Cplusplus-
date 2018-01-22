#include<iostream>
using namespace std;
char* possible;
char keys[10][10]={"","","abc","def","ghi","jkl","mno"};
int func(int input[],int si,char output[][100])
{
    if(si==0)
    {
        possible=keys[input[si]];
        int i=0;
        for(i=0;possible[i]!='\0';i++)
        {
            output[i][0]=possible[i];
            output[i][1]='\0';
        }

    return i;
    }

   int rows = func(input,si-1,output);

     possible=keys[input[si]];
     int h=0;
while(possible[h]!='\0')
{
    h++;
}
int g=0;
while(--h)
{
for(int v=0+g;v<g+rows;v++)
{
    int m=0;
    while(output[v][m]!='\0')
    {
        output[v+rows][m]=output[v][m];
    m++;
    }
    output[v+rows][m]='\0';
    g=g+rows;
}
}
    int m=0;
    while(possible[m]!='\0')
    {
        for(int i=0+(m*rows);i<(m+1)*rows;i++)
        {
            int k=0;
            while(output[i][k]!='\0')
            {
                k++;
            }
           // cout<<k<<" ";
            output[i][k]=possible[m];
            output[i][k+1]='\0';
        }
        m++;
    }
return m*rows;

}

int main()
{
    int input[5]={6,2,3,4,5};
    char output[100][100];
    int k=func(input,1,output);

    for(int i=0;i<k;i++)
    {
        cout<<output[i]<<endl;
    }


}

