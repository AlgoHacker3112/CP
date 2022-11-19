// Problem: The Coin Change Problem
// Contest: HackerRank - Algorithms - Dynamic Programming - The Coin Change Problem - Prepare - Algorithms - Dynamic Programming
// URL: https://www.hackerrank.com/challenges/coin-change/problem?isFullScreen=true
// Memory Limit: 512 MB
// Time Limit: 4000 ms
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
int n,m;
vector<int>coins;
int dp[251][51];

int solve(int sum,int index){
    
    if(sum==0) return 1;
    if(sum<0) return 0;
    if(index==0) return 0;
    if(dp[sum][index]!=-1) return dp[sum][index];
    
    dp[sum][index]=solve(sum,index-1)+solve(sum-coins[index-1],index);
    return dp[sum][index];
}

int32_t main()
{
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    //cin>>t;
    while(t--){
		cin>>n>>m;
		coins.resize(m);
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<m;i++) cin>>coins[i];
		cout<<solve(n,m);
		
    }
}








