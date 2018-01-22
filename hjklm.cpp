#include <iostream>
using namespace std;
bool func(int x,int y,int current,int count,int arr[8][8])
{
if(current==count)
{
	return true;
}
if(x+2<8 && y+1<8 && arr[x+2][y+1]==-1)
{	
	arr[x][y]=current;
	if(func(x+2,y+1,current+1,count,arr))
	{	
		return true;
	}else{
		arr[x][y]=-1;
	}
}
if(x+2<8&&y-1>=0 && arr[x+2][y-1]==-1)
{
	arr[x][y]=current;
	if(func(x+2,y-1,current+1,count,arr))
	{	
		return true;
	}else{
		arr[x][y]=-1;
	}
}
if(x-2>=0&&y+1<8 && arr[x-2][y+1]==-1)
{

	arr[x][y]=current;
	if(func(x-2,y+1,current+1,count,arr))
	{	
		return true;
	}else{
		arr[x][y]=-1;
	}
}
if(x-2>=0&&y-1>=0 && arr[x-2][y-1]==-1)
{

	arr[x][y]=current;
	if(func(x-2,y-1,current+1,count,arr))
	{	
		return true;
	}else{
		arr[x][y]=-1;
	}
}
if(y+2<8&&x+1<8 && arr[x+1][y+2]==-1)
{

	arr[x][y]=current;
	if(func(x+1,y+2,current+1,count,arr))
	{	
		return true;
	}else{
		arr[x][y]=-1;
	}
}
if(y+2<8&&x-1>=0 && arr[x-1][y+2]==-1)
{

	arr[x][y]=current;
	if(func(x-1,y+2,current+1,count,arr))
	{	
		return true;
	}else{
		arr[x][y]=-1;
	}
}
if(y-2>=0&&x+1<8 && arr[x+1][y-2]==-1)
{

	arr[x][y]=current;
	if(func(x+1,y-2,current+1,count,arr))
	{	
		return true;
	}else{
		arr[x][y]=-1;
	}
}
if(y-2>=0&&x-1>=0 && arr[x+1][y+2]==-1)
{

	arr[x][y]=current;
	if(func(x+1,y+2,current+1,count,arr))
	{	
		return true;
	}else{
		arr[x][y]=-1;
	}
}
return false;
}

int main()
{
	int arr[8][8];
	for(int i=0;i<8;i++)
	{
		for (int j= 0; j< 8; ++i)
		{
			arr[i][j]=-1;
		}
	}
	/*int n;
	cin>>n;
	cout<<"hello";	
	func(0,0,0,n,arr);
*/
	cout<<"hwllo";

	return 0;
}