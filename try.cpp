#include<iostream>
#include"map.h"
#include"BinaryTreeNode.h"
using namespace std;
/*
bool func(BinaryTreeNode<int>** arr[],int size)
{
    map<BinaryTreeNode<int>*,bool> treenode;

        for(int i=0;i<size;i++)
    {
     treenode.set(arr[i],true);
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]->left!=NULL)
        {
                if(treenode.remove(arr[i]->left)==0)
                    return false;  }
        if(arr[i]->right!=NULL)
        {
            if(treenode.remove(arr[i]->right)==0)
            remove(arr[i]->right);
        }
    }
}*/
int fnc(int arr[],int size)
{
    map<bool> mymap;
    int maxsofar=0;
    int count=0;
    for(int i=0;i<size;i++)
    {
        mymap.set(arr[i],true);
    }
    for(int i=0;i<size;i++)
    {
        int current=arr[i];
        while(mymap.remove(current))
        {
            current++;
            count++;
        }
        current=arr[i]-1;
        while(mymap.remove(current)
        {
            current--;
            count++;
        }
        if(count>maxsofar)
        {
            maxsofar=count;
            count=0;
        }
    }
}

void func(int arr[],int size,int curr,int sum,int & maxsum)
{
    if(curr>size)
    {
        if(sum>maxsum)
        {
            maxsum=sum;
            return 0 ;
        }
    }
    sum=sum+arr[curr];
    func(arr,curr+2,sum);
    sum=sum-arr[curr];
    func(arr,curr+1,sum);
}
sir solution->
best(a)=max(best(a-1),a[0]+best(a-2));
int main()
{
    int arr[8]={1,9,8,7,3,5,4,2};
    int maxsum=0;
    func(arr,8,0,0,maxsum);
    cout<<maxsum;
    return 0;
}



