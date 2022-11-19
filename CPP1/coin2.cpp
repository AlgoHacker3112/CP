 
#include<bits/stdc++.h>
//#define int long long
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
 
 // int solve(int sum,int prevIndex){
 	// if(sum==0) return 1;
 	// if(dp[sum][prevIndex]!=-1) return dp[sum][prevIndex];
 	// if(prevIndex==n) return 0;
//  	
 	// int ans=0;
 	// if(coins[prevIndex]<=sum) 
 	// ans=(ans+solve(sum-coins[prevIndex],prevIndex))%MOD;
//  	
 	// ans=(ans+solve(sum,prevIndex+1))%MOD;
 	// return dp[sum][prevIndex]=ans;
//  	
//  	
// }
 
 
 
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
		 
		 int dp[MAX];
         for(int i=0;i<MAX;i++) dp[i]=0;
	   dp[0]=1;
	   for(int i=0;i<n;i++)
	   	for(int j=1;j<=x;j++)
	   	 if(coins[i]<=j)
	   	 dp[j]=(dp[j-coins[i]]+dp[j])%MOD;
	  
	   
	    cout<<dp[x]<<endl;
    }
}
 
 
 
 