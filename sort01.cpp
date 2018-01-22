void swap(int* i,int* j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}
void sort01(int arr[],int s)
{
    int i=0,j=s-1;
    while(i<=j)
{
    if(arr[i]==0)
    {
        i++;
    }
    else
    if(arr[j]==1)
    {
        j--;
    }
    else
    {
        swap(&arr[i],&arr[j]);
        i++;j--;
    }



}


}
int main()
{
    int arr[7]={0,1,1,0,1,0,1};
    sort01(arr,7);




    return 0;
}
