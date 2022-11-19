// Problem: Intern Projects
// Contest: HackerRank - Internship Warm up Test
// URL: https://www.hackerrank.com/contests/internship-warm-up-test/challenges/intern-projects
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
const int MAX=1000;
int dp[MAX][MAX];
vector<int> a;
vector<int> b;



int solve(int l,int r,int k,int m){
	if(k==m) return 0;
	if(dp[l][r]!=-1) return dp[l][r];
	
	return dp[l][r]=max((a[l]*b[k]+solve(l+1,r,k++,m)),(a[r]*b[k]+solve(l,r-1,k++,m)));
	
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    // cin>>t;
    while(t--){
		int n,m; cin>>n>>m;
		memset(dp,-1,sizeof(dp));
		a.resize(n);
		b.resize(m);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		solve(0,n-1,0,m);
		cout<<solve(0,n-1,0,m)<<endl;
    
    }
}








