#include <iostream>
using namespace std;

bool check(int arr[][4],int rowno,int colno,int eles)
{
    int p=arr[rowno][colno];
    for(int i=rowno+1;i<rowno+eles;i++)
    {
        for(int j=colno;j>colno-eles;j--)
        {
            if(arr[i][j]==p)
            {
                continue;
            }
            else {return false;}
        }
    }
    return true;
}

int main()

{
    int arr[][4] = {{9, 9, 9, 9},
                  {9, 9, 9, 9},
                  {9, 9, 9, 9},
                  {9, 9, 9, 9}};


 int k=1;
 int m=1;
 int row=4,col=4;
 for(int i=0;i<row;i++)
 {
     for(int j=0;j<col;j++)
     {
         if(arr[i][j]==arr[i][j+1]&&j!=(col-1))
         {
             k++;
             continue;
         }
         else{
            if(k>m)
            {
                if(check(arr,i,j,k))
                    {m=k;}
                k=1;
            }
            else {
                k=1;
                continue;
            }
         }

     }

 }



cout<<m;
    return 0;
}
