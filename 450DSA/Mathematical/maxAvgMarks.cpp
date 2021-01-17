#include <bits/stdc++.h>
#include<string.h>
using namespace std;

class stu{
    public:
    string name;
    int m1,m2,m3;
    int avg;
};

int main() {
	int t;
	cin>>t;
	int n;
    int max;
    while(t--){
	    cin>>n;
	    stu *arr=new stu[n];
        max = 0;
        stu maxAvg;
        for(int i=0;i<n;i++){
            cin>>arr[i].name;
            cin >> arr[i].m1;
            cin >> arr[i].m2;
            cin >> arr[i].m3;
            arr[i].avg=(arr[i].m1+arr[i].m2+arr[i].m3)/3;
            if(arr[i].avg>max){
                max = arr[i].avg;
                maxAvg.name = arr[i].name;
                maxAvg.avg = arr[i].avg;
            }
        }
        cout << maxAvg.name << " " << maxAvg.avg<<endl;
    }
	return 0;
}