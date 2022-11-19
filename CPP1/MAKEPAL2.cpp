// Problem: Make Palindrome 2
// Contest: CodeChef - Starters 48 Division 3 (Rated)
// URL: https://www.codechef.com/START48C/problems/MAKEPAL2
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
		string s; cin>>s;
		int count1=0; 
		int count0=0;
		
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0') count0++;
			else count1++;
			
		}
		cerr<<count1<<" "<<count0<<endl;
		if(count0<=count1) {
			string ans="";
			for(int i=0;i<count1;i++) ans+='1';
			cout<<ans<<endl;
		}
		else {
			string ans="";
			for(int i=0;i<count0;i++) ans+='0';
			cout<<ans<<endl;
		}
    }
}








