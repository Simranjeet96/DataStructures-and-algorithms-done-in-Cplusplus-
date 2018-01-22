#include<iostream>
using namespace std;
//0 is block & 1 is allow
bool move_possible(int n,int row,int col,int input[][],int sol[][])
{
if(row>n-1||col>n-1)
{
    return false;
}
if(input[row][col]==0||sol[row][col]==1)
{
    return false;
}
return true;
}

bool findpath(int n,int currentrow,int currentcol,int destrow,int destcol,int input[][],int sol[][])
{
    if(currentrow==destrow&&currentcol==destcol)
{
    print(sol);
    exit(0);
}
    if(move_possible(n,currentrow,currentcol+1,input,sol))
    findpath()
    else

}


int main()
{
 int n;
 cin>>n;
 int** input;
 input= new int*[n];
 int** temp=input;
 for(int i=0;i<n;i++)//allocation for input matrix
 {
     (*temp)=new int[n];
     for(int j=0;j<n;j++)
     {cin>>(*temp)[j];}
    (temp++);
 }
if(findpath()==true)
{
    print(sol);
}
else{
    cout<<"no solution";
}


}
