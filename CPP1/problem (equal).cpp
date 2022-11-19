// Problem: Equal
// Contest: HackerRank - Algorithms - Dynamic Programming
// URL: https://www.hackerrank.com/challenges/equal/problem
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


int solve(int n){
    
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    // cin>>t;
    while(t--){
		int n; cin>>n;
		int arr[n];
		int M=INF;
		int ans=INF;
		for(int i=0;i<n;i++){
		 cin>>arr[i];
			M=min(M,arr[i]);
		}
		// cout<<M<<endl;
		for(int i=M-4;i<=M;i++){
			int s=0;
			for(int j=0;j<n;j++){
				int temp=arr[j]-i;
				s+=temp/5+(temp%5)/2+(temp%5)%2;
				
			}
			ans=min(ans,s);
			
		}
		cout<<ans<<endl;
		
    }
}








