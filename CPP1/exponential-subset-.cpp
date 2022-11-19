// Problem: Exponential subsets
// Contest: HackerEarth - Algorithms - Dynamic Programming - 2 Dimensional
// URL: https://www.hackerearth.com/practice/algorithms/dynamic-programming/2-dimensional/practice-problems/algorithm/exponential-subset-f78d066f/
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
const int MAX=1e4;

int inrange(int i,int j,int n,int m)
{
	if(i<0 || j<0 || i>=n || j>=m)
	return 0;
	return 1;
}
	int n;
 int dp[MAX+1][101];
 vector<int> a;
 bool solve(int sum,int ind){
 	 if(sum==0) return true;
 	 if(ind==n) return false;
 	 if(dp[sum][ind]!=-1) return dp[sum][ind];
 	 
 	 bool ans=0;
 	 if(a[ind]<=sum)
 	   ans=ans|| solve(sum-a[ind],ind+1);
 	   
 	   ans=ans|| solve(sum,ind+1);
 	   
 	   return dp[sum][ind]=ans;
 }
 int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    cin>>t;
    while(t--){
	  cin>>n;
		a.resize(n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<MAX+1;i++)
			for(int j=0;j<=100;j++)
			 dp[i][j]=-1;
			 
			 for(int i=0;i<n;i++){
			 	int sum=a[i]*a[i];
			 	bool ans=0;
			 	while(sum<=MAX){
			 		ans=solve(sum,0);
			 		sum*=a[i];
			 		if(ans) break;
			 	}
			 	cout<<ans<<" ";
			 }
			 cout<<endl;
		
    }
}








