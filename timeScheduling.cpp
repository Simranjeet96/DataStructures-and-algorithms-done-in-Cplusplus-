#include<bits/stdc++.h>
using namespace std;

class Job{
	public:
	string name;
	int deadline;
	int profit;
	Job(){

	}
	void addDetails(string name,int deadline,int profit){
		this->deadline=deadline;
		this->name=name;
		this->profit=profit;
	}
	void print(){
		cout<<name<<" "<<deadline<<" "<<profit<<endl;
	}

};

bool compare(Job first,Job second){
	if(first.deadline>second.deadline){
		return true;
	}
	if(first.deadline<second.deadline){
		return false;
	}
	if(first.deadline==second.deadline){
		if(first.profit>second.profit){
			return true;
		}else{
			return false;
		}
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	Job* arr = new Job[n];
	int profit;
	int deadline;
	string name;
	for(int i=0;i<n;i++){
		cin>>name>>deadline>>profit;
		arr[i].addDetails(name,deadline,profit);
	}

	Job temp;
	for(int i=1;i<=n-1;i++){
		for(int j=n-1;j>=i;j--){
			if(!compare(arr[j-1],arr[j])){
				temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}

		}
	}
	stack<Job> s;
	int count=0;
	while(1){
		s.push(arr[count]);
		if(arr[count].deadline==1){
			break;
		}
		count++;
	}
	while(!s.empty()){
		s.top().print();
		s.pop();
	}

	return 0;
}