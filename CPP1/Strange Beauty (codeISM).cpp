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
    cin>>t;
    while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		const int MAX=2e5+1;
		vector<int> dp(MAX);
		//dp[i]-> The max reside if we consider i element at the end of the beautiful array
		sort(a.begin(),a.end());
		dp[a[0]]=1; 
		for(int i=1;i<n;i++){
			dp[a[i]]=dp[a[i]]+1;
	        // Now I’m going through all the factors of a[i] below         
			if(a[i]!=1) dp[a[i]]=max(dp[a[i]],dp[1]+1);
                                 // Here factor is 1
			for(int j=2;j*j<=a[i];j++){
				if(a[i]%j==0){
					dp[a[i]]=max(dp[a[i]],dp[j]+1);
                                 // Here factor is j
					dp[a[i]]=max(dp[a[i]],dp[a[i]/j]+1);
                                 // Here factor is a[i]/j
				}
			}	
		}

		int ans=0;
		for(int i=0;i<=MAX;i++) ans=max(ans,dp[i]);
		cout<<n-ans<<endl;	
	
    }
}








