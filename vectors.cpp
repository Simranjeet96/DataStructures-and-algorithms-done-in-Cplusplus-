#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("INPUT.txt", "r", stdin);
    // for writing output to output.txt
    freopen("OUTPUT.txt", "w", stdout);
#endif
	map<char*, int> map1;
	char a[] = "abc";
	char b[] = "def";
	char c[] = "ghi";
	map1[b] = 134;
	map1[a] = 10;
	map1[c] = 43;
	string name;
	cin>>name;
	cout<<name<<endl;
	char d[] = "jkl";
	if (map1.count(d) != 0)
                cout<<map1.find(d)->second<<endl;
	
	if (map1.count(d) == 0) {
		cout << "0" << endl;
	} else {
		cout << "Something else" << endl;
	}
	cout << map1.size() << endl;

	map<char*, int>::iterator sr = map1.find(a);
	if (sr != map1.end()) {
		cout << sr->second << endl;
	}

	map<char*, int>::iterator it1 = map1.begin();
	while (it1 != map1.end()) {
		cout << it1->first << endl;
		cout << it1->second << endl;
		it1++;
	}


	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	vector<int>::iterator it = v.begin();
	cout << *it << endl;
	it++;
	cout << *it << endl;
	it = v.begin();
	while (it != v.end()) {
		cout << *it << endl;
		it++;
	}

}

		