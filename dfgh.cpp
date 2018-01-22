void findmaxlen(char input[],int s)
{
    int arr[256]={-1};
int i=0,j=0,maxl=0;
int sind=0,eind=0;
 for(i=0;i<s;i++)
{

    while(arr[input[j]]==-1&&j<n)
    {
        arr[input[j]]=j;
        j++;
    }
      if(i-j+1>maxl)
    {
        maxl=i-j+1;
    sind=i;
    eind=j-1;
    }

    while(i<=arr[input[j]])
    {
        i++;
    }
    arr[input[j]]=j;

}
