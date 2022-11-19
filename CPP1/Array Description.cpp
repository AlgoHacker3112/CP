// Problem: Array Description
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1746/
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
const int rem=1e9+7;
const int INF=1e18;
const int MAX=1e5+1;

int inrange(int i,int j,int n,int m)
{
	if(i<0 || j<0 || i>=n || j>=m)
	return 0;
	return 1;
}
int k=1;
int n,m;
int dp[MAX][101];
vector<int> v;
int solve(int i,int prev){

	if(i==n) return 1;
	
	if(dp[i][prev]!=-1) return dp[i][prev];
	
	int ans=0;
	if(v[i]!=0){
		if(prev==0 || abs(v[i]-prev)<=1)
		 ans=(ans + solve(i+1,v[i]))%rem;
	}
	else{
		if(prev==0)
			for(int j=1;j<=m;j++)
				ans=(ans+solve(i+1,j))%rem;
		else {
			for(int j= max( k, prev-1);j<= min(m,prev+1);j++)
			 ans=(ans+solve(i+1,j))%rem;
		}
		
	}
	return dp[i][prev]=ans;
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
		 v.resize(n);
		 for(int i=0;i<n;i++) cin>>v[i];
		 for(int i=0;i<MAX;i++)
		 	for(int j=0;j<101;j++) 
		   dp[i][j]=-1;
		   
		   cout<<solve(0,0);
    }
}








