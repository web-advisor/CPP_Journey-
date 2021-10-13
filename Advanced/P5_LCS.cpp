#include <iostream>
#include <vector>

using namespace std;

string printLCS(string s1,string s2, vector<vector<pair<int,char>>> &v){
	int n=s1.size();
	int m=s2.size();
	string ans="";
	while(n>0 && m>0){
		if(v[n][m].second=='D'){
			ans=s1[n-1]+ans;
			n--;m--;
		}
		else if(v[n][m].second=='U')
			n--;
		else
			m--;
	}
	return ans;
}

void LongestCommonSubseq(string s1, string s2, vector<vector<pair<int,char>>> &v){
	for(int i=0; i<=s1.size(); i++)
		for(int j=0; j<=s2.size(); j++){
			if(i==0||j==0)
				v[i][j]={0,'D'};
			else if(s1[i-1]==s2[j-1])
				v[i][j]={v[i-1][j-1].first+1,'D'};
			else{
				if(v[i-1][j].first>v[i][j-1].first)
					v[i][j]={v[i-1][j].first,'U'};
				else
					v[i][j]={v[i][j-1].first,'L'};
			}
		}
}

int main(){
	string s1="AGGTAB";
	string s2="GXTXAYB";
	vector<vector<pair<int,char>>> v(s1.size()+1,vector<pair<int,char>>(s2.size()+1));
	LongestCommonSubseq(s1,s2,v);
	for(auto i:v){
		for(auto j:i)
			cout<<j.second<<' ';
		cout<<endl;
	}
	cout<<printLCS(s1,s2,v);
}
