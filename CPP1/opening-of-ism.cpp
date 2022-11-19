// Problem: Opening of ISM
// Contest: HackerRank - Internship Warm up Test
// URL: https://www.hackerrank.com/contests/internship-warm-up-test/challenges/opening-of-ism
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



int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    // cin>>t;
    while(t--){
		int n ; cin>>n;
		int a[n];
		int sum=0;
    int ans=0;
	
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			sum+=a[i];
			if(ans<sum) ans=sum;
		} 
		cout<<ans<<endl;
    }
}








