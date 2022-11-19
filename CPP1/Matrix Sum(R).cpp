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
vector<vector<int> >dp;
vector<vector<int> >matrix;

int solve(int i,int j){
	if(i<0 || j<0) return 0;
	if(i==0 and j==0) return matrix[0][0];
	
	if(dp[i][j]!=-1) return dp[i][j];
	
	//int ans=0;
	// if(i!=0 and j!=0){
		// int up=solve(i-1,j) +matrix[i][j];
		// int down=solve(i,j-1)+ matrix[i][j];
		// ans=max(up,down);
		// dp[i][j]=ans;
	// }
	// if(i==0 and j!=0){
		// ans=solve(i,j-1)+matrix[i][j];
		// dp[i][j]=ans;
	// }
	// if(j==0 and i!=0){
		// ans=solve(i-1,j)+matrix[i][j];
		// dp[i][j]=ans;
	// }
	 dp[i][j]=max(solve(i,j-1),solve(i-1,j))+ matrix[i][j];
	 return dp[i][j];
	
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
     matrix.resize(n,vector<int>(m));
     dp.resize(n,vector<int>(m));
     for(int i=0;i<n;i++)
     	for(int j=0;j<m;j++)
     		cin>>matrix[i][j];
     		
  	for(int i=0;i<n;i++)
     	for(int j=0;j<m;j++)
     		dp[i][j]=-1;
     	
     cout<<solve(n-1,m-1);
    }
}








