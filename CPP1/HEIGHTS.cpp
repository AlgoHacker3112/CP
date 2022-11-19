// Problem: Similar Heights
// Contest: CodeChef - Starters 47 Division 3 (Rated)
// URL: https://www.codechef.com/START47C/problems/HEIGHTS
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// Powered by AlgoHacker

#include<bits/stdc++.h>
#include <unordered_map>
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
    cin>>t;
    while(t--){
		int n; cin>>n;
		int a[n];
		int max_=0;
		unordered_map<int,int>ump;
		for(int i=0;i<n;i++){
			cin>>a[i];
			max_=max(max_,a[i]);
			ump[a[i]]++;
		}
		int count =0;
		bool flag=0;
		int maxF=0;
		if(ump[max_]==1) flag=1;
		for(int i=0;i<n;i++){
			 maxF=max(maxF,ump[a[i]]);
			if(ump[a[i]]==1 ) count++;
			
		}
		if(flag){
			if(count==1){
				if(maxF>2) cout<<1<<endl;
				else cout<<maxF<<endl;
			}
			else cout<<(count+1)/2<<endl;
		}
		else cout<<(count+1)/2<<endl;
    }
}








