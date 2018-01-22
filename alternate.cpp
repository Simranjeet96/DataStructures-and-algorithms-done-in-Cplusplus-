#include<iostream>
using namespace std;

void func(int arr1[],int arr2[],int i,int j,int temp[],int current,int callno,int size1,int size2)
{

    if(callno%2==0)
    {
        if(i==0)
        {
            temp[current]=arr1[i];
            func(arr1,arr2,i+1,j,temp,current+1,callno+1,size1,size2);
            func(arr1,arr2,i+1,j,temp,current,callno,size1,size2);
        }else{
        while(arr1[i]<temp[current-1]&&i<size1)
        {
            i++;
        }
        if(i<size1)
       {
        temp[current]=arr1[i];
            func(arr1,arr2,i+1,j,temp,current+1,callno+1,size1,size2);
            func(arr1,arr2,i+1,j,temp,current,callno,size1,size2);

       }else{
        if(current!=0)
    {
        for(int i=0;i<current;i++)
        cout<<temp[i]<<" ";
        cout<<endl;
        return ;

       }
    }
        }
    }else{
        while(arr2[j]<temp[current-1]&&j<size2)
        {
            j++;
        }
        if(j<size2)
       {
            temp[current]=arr2[j];
            func(arr1,arr2,i,j+1,temp,current+1,callno+1,size1,size2);
            func(arr1,arr2,i,j+1,temp,current,callno,size1,size2);
       }
else{
      if(current!=0)
    {
        for(int i=0;i<current;i++)
        cout<<temp[i]<<" ";
        cout<<endl;
        return ;
    }
}


}
}
int main()
{
    int arr1[]={2,4,5,7};
    int arr2[]={3,8,40,41};
    int temp[10];
    func(arr1,arr2,0,0,temp,0,0,4,4);
    func(arr2,arr1,0,0,temp,0,0,4,4);

}
