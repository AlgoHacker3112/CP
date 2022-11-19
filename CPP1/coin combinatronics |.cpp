// Problem: Coin Combinations I
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1635
// Memory Limit: 512 MB
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
const int MAX=1e6+1;
	int n,x;
 vector<int>coins;
 vector<int> dp(MAX,-1);
 int solve(int sum){
 	if(sum==0) return 1;
 	if(dp[sum]!=-1) return dp[sum];
 	
 	int ans=0;
 	for(int i=0;i<n;i++)
 		if(coins[i]<=sum)
 			ans=(ans+solve(sum-coins[i]))%MOD;
 		return dp[sum]=ans;
 }
 


int32_t main()
{
	  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    //cin>>t;
    while(t--){
	  cin>>n>>x;
		coins.resize(n);
		for(int i=0;i<n;i++) cin>>coins[i];
		 
		 cout<<solve(x);
    }
}








