#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("INPUT.txt", "r", stdin);
    // for writing output to output.txt
    freopen("OUTPUT.txt", "w", stdout);
#endif

	ofstream writer;
	string line;
	writer.open("example.txt");
	getline(cin,line);
	while(line.length()!=0)
	{
		writer<<line;
	}
	writer<<line;
	writer.close();
}