#include <iostream>
using namespace std;

void rotateClockwise90degrees(int *input[], int n) {
	
/* Don't write main().
 	* the input string is already passed as function argument.
 	* Taking input and printing output is handled automatically.
 	*/
 	int temp[4];
 	for(int i=0;i<(n+1)/2;i++)
 	{
 		for(int j=i;j<n-1-i;j++)
 		{
 			temp[0]=input[i][j];
 			temp[1]=input[j][n-i-1];
 			temp[2]=input[n-i-1][n-j-1];
 			temp[3]=input[n-j-1][i];
 			input[j][n-i-1]=temp[0];
 			input[n-i-1][n-j-1]=temp[1];
 			input[n-j-1][i]=temp[2];
 			input[i][j]=temp[3];
 		}
 	} 
 	
}
void print(int *input[],int n)
{
	for (int i = 0; i < n; ++i)
	{
	for (int j = 0; j < n; ++j)
	{
		cout<<input[i][j]<<",";;
	}
	cout<<endl;

	}


}

int main()
{
	int n;
	cin>>n;
	int* ptr;
	ptr=&n;
	cout<<*ptr<<'\t'<<ptr<<endl;
	ptr=ptr+5;

	cout<<*ptr<<'\t'<<ptr<<endl;
	int ** arr=new int*[n];
	for (int i = 0; i < n; ++i)
	{
		arr[i]=new int[n];
	}
	int a=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arr[i][j]=a;
			a++;
		}
	}
	print(arr,n);
	cout<<endl<<endl;
	rotateClockwise90degrees(arr,n);
	print(arr,n);
	
	return 0;
}