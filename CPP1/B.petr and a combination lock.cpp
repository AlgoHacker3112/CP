// Problem: B. Petr and a Combination Lock
// Contest: Codeforces - Hello 2019
// URL: https://codeforces.com/problemset/problem/1097/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// Powered by AlgoHacker

#include<bits/stdc++.h>
#define int long long
#define ld long double
#define m_p make_pair
#define que queue<int>
using namespace std;
const ld err=1e-7;
const ld pi=3.1415926535897932384626433832795;
const int MOD=1e9+7;
const int INF=1e18;

int inrange(int i,int j,int n,int m)
{
	if(i<0 || j<0 || i>=n || j>=m)
	return 0;
	return 1;
}


int solve(int n){
    
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    // cin>>t;
    while(t--){
		 int n; cin>>n;
		 vector<int> v(n);
		 for(int i=0;i<n;i++) cin>>v[i];
		 for(int i=0;i<(1<<n);i++){
		 	int sum=0;
		 	for(int j=0;j<n;j++){
		 		if(i&(1<<j)) sum+=v[j];
		 		else sum-=v[j];
		 	}
		 	if(sum%360==0){
		 		cout<<"YES";
		 		return 0;
		 	}
		 }
		 cout<<"NO";
    }
}








