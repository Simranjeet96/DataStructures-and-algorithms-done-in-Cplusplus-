#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int main(int argc, char const *argv[])
{
	int mat[6][6];
	cout<<time(nullptr)<<endl<<endl;
	srand(time(nullptr));
	for(int i=5;i>=0;i--){
		for(int j=5;j>=0;j--){
			mat[i][j]=rand()%2;
		}
	}
	for(int i=0;i<=5;i++){
		for (int j = 0; j <=5; ++j)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}