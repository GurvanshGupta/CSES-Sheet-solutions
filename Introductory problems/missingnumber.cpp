#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> arr;
    for(long long i=0;i<n-1;i++){
    	long long x;
    	cin>>x;
    	arr.push_back(x);
	}
	sort(arr.begin(),arr.end());
	for(long long i=1;i<n;i++){
		if(i!=arr[i-1]){
			cout<<i;
			return 0;
		}
	}
	cout<<n;
	return 0;
  
    return 0;
}
