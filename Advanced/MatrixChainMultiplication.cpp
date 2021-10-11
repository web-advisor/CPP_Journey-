#include <iostream>
#include <vector>
using namespace std;

void printMultiplicationOrder(vector <vector<int>> &v2,int start,int end){
	if(start==end-1){
		cout<<char('A'+start);
		return;
	}
	cout<<'(';
	printMultiplicationOrder(v2,start,v2[start][end]);
	printMultiplicationOrder(v2,v2[start][end],end);
	cout<<')';
}

int MinCost(vector <int> &v,vector <vector<int>> &v2,int start,int end){
	if(start==end-1)
		return 0;
	int myAns=1e9;
	for(int i=start+1; i<end; i++){
		int recAns=MinCost(v,v2,start,i)+MinCost(v,v2,i,end)+v[start]*v[end]*v[i];
		if(recAns<myAns){
			v2[start][end]=i;
			myAns=recAns;
		}
	}
	return myAns;
}

int main(){
	int n=5;
	vector <int> v={1,2,3,1,2};
	vector <vector<int>> v2(n,vector<int>(n,0));
	cout<<MinCost(v,v2,0,v.size()-1)<<": ";
	printMultiplicationOrder(v2,0,v.size()-1);
}