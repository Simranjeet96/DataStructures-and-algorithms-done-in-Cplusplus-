#include<iostream>
using namespace std;

int* makelps(string arr){
	int size=arr.length();
	int* lps=new int[size];
	int i=0;
	int j=1;
	lps[0]=0;
	for ( j = 1; j < size; ++j)
	{
		if(arr[i]==arr[j])
		{
			lps[j]=i+1;
			i++;
		}else{
			if(i!=0){
			i=lps[i-1];
			j--;
			}
		}
	}
	return lps;
}

void KMP(string text,string pattern,int* lps){
int textInd=0;
int patternInd=0;
int textSize=text.length();
int patternSize=pattern.length();
for(textInd=0;textInd<textSize;textInd++){
if(text[textInd]==pattern[patternInd])
{
	patternInd++;
	if(patternInd==patternSize)
	{
		cout<<"pattern found at"<<textInd - patternSize + 1 <<endl;
		patternInd=lps[patternSize-1];
	}
}else{
	if(patternInd!=0){
	patternInd=lps[patternInd-1];
	textInd--;
	}
}

}

}



int main()
{
	string text="abcabsabhajaabcbab";
	string pattern="abc";
	KMP(text,pattern,makelps(pattern));

	return 0;
}