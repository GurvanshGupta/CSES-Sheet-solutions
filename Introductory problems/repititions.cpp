#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <queue>
#include <map>
#include <set>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<long long>

const int MOD = 1e9 + 7;

void solve() {
    // Your solution code goes here
    string s;
    cin>>s;
    ll count=1;
    ll m=1;
	for(int i=1;i<s.length();i++){
		if(s[i]==s[i-1]){
			count++;
			m=max(m,count);
		}
		else{
			m=max(m,count);
			count=1;
		}
	} 
	cout<<m;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    while (t--) {
        solve();
    }

    return 0;
}

