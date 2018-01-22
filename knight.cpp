#include <iostream>
using namespace std;
bool func(int x,int y,int current,int count,int arr[][8])
{
if(current==count)
{
	return true;
}
/*for(int i=0;i<8;i++)
	{60
		for (int j= 0; j<8; j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<endl<<endl;*/
if(x+2<8 && y+1<8 && arr[y+1][x+2]==-1)
{	
	arr[y][x]=current;
	if(func(x+2,y+1,current+1,count,arr))
	{	
		return true;
	}else{
		arr[y][x]=-1;
	}
}
if(x+2<8&&y-1>=0 && arr[y-1][x+2]==-1)
{
	arr[y][x]=current;
	if(func(x+2,y-1,current+1,count,arr))
	{	
		return true;
	}else{
		arr[y][x]=-1;
	}
}
if(x-2>=0&&y+1<8 && arr[y+1][x-2]==-1)
{

	arr[y][x]=current;
	if(func(x-2,y+1,current+1,count,arr))
	{	
		return true;
	}else{
		arr[y][x]=-1;
	}
}
if(x-2>=0&&y-1>=0 && arr[y-1][x-2]==-1)
{

	arr[y][x]=current;
	if(func(x-2,y-1,current+1,count,arr))
	{	
		return true;
	}else{
		arr[y][x]=-1;
	}
}
if(y+2<8&&x+1<8 && arr[y+2][x+1]==-1)
{

	arr[y][x]=current;
	if(func(x+1,y+2,current+1,count,arr))
	{	
		return true;
	}else{
		arr[y][x]=-1;
	}
}
if(y+2<8&&x-1>=0 && arr[y+2][x-1]==-1)
{

	arr[y][x]=current;
	if(func(x-1,y+2,current+1,count,arr))
	{	
		return true;
	}else{
		arr[y][x]=-1;
	}
}
if(y-2>=0&&x+1<8 && arr[y-2][x+1]==-1)
{

	arr[y][x]=current;
	if(func(x+1,y-2,current+1,count,arr))
	{	
		return true;
	}else{
		arr[y][x]=-1;
	}
}
if(y-2>=0&&x-1>=0 && arr[y+2][x+1]==-1)
{

	arr[y][x]=current;
	if(func(x+1,y+2,current+1,count,arr))
	{	
		return true;
	}else{
		arr[y][x]=-1;
	}
}
return false;
}

int main()
{
	
	int arr[8][8];
	for(int i=0;i<8;i++)
	{
		for (int j= 0; j< 8; j++)
		{
			arr[i][j]=-1;
		}
	}
	cout<<"hwllo"<<endl;
	int n;
	cin>>n;
	cout<<"hello"<<endl;	
	func(0,0,0,n,arr);
	for(int i=0;i<8;i++)
	{
		for (int j= 0; j< 8; j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}

	return 0;
}