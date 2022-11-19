// Problem: A. Garland
// Contest: Codeforces - Codeforces Round #612 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1286/A
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

int n;
vector<int> a;
int dp[101][51][51][3];
int solve(int i,int co,int ce,int prev){
    
    if(i==n) return 0;
    if(dp[i][co][ce][prev]!=-1) return dp[i][co][ce][prev];
    
    int res=1e9;
    if(a[i]!=0){
    	if(a[i]%2==prev || prev==2) res=solve(i+1,co,ce,a[i]%2);
    	
    	else res=1+solve(i+1,co,ce,a[i]%2);
    }
    else{
    	if(prev==2){
    		if(co>0) res=min(res,solve(i+1,co-1,ce,(int)1));
    		if(ce>0) res=min(res,solve(i+1,co,ce-1,(int)0));
    	}
    	else{
    		if(co>0) res=min(res,solve(i+1,co-1,ce,(int)1)+(prev==0));
    		if(ce>0) res=min(res,solve(i+1,co,ce-1,(int)0)+(prev==1));
    	}
    }
    
    return dp[i][co][ce][prev]=res;
    
}

int32_t main()
{
	  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    //cin>>t;
    while(t--){
		 cin>>n;
		 
		 memset(dp,-1,sizeof(dp));
		 a.resize(n);
		 int ce=n/2;
		 int co=n-ce;
		 for(int i=0;i<n;i++){
		 	cin>>a[i];
		  if(a[i]%2==0 and a[i]!=0) ce--;
		  else if(a[i]%2) co--;
		 }
		 cout<<solve(0,co,ce,2)<<endl;
		  // cout<<co<<" "<<ce<<endl;
    }
}








