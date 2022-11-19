// Problem: A. Boredom
// Contest: Codeforces - Codeforces Round #260 (Div. 1)
// URL: https://codeforces.com/problemset/problem/455/A
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
const int rem=1e9+7;
const int INF=1e18;


int inrange(int i,int j,int n,int m)
{
	if(i<0 || j<0 || i>=n || j>=m)
	return 0;
	return 1;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    //cin>>t;
    while(t--){
		 int n; cin>>n;
		 map<int,int> mp;
		 for(int i=0;i<n;i++){
		 	int temp; cin>>temp;
		 	mp[temp]++;
		 }
		 int dp[100001]={0};
		 dp[1]=mp[1];
		 for(int i=2;i<=100000;i++){
		 	dp[i]=max(dp[i-1],dp[i-2]+i*mp[i]);
		 }
		 
		 cout<<dp[100000];
    }
}








