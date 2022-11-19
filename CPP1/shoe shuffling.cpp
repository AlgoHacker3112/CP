// Problem: B. Shoe Shuffling
// Contest: Codeforces - CodeCraft-22 and Codeforces Round #795 (Div. 2)
// URL: https://codeforces.com/contest/1691/problem/B
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
		vector<int> v(n+1),freq;
	  map<int,vector<int> >mp;
	  for(int i=1;i<=n;i++){
	  	 cin>>v[i];
	  	 mp[v[i]].push_back(i);
	  }
	  bool flag=0;	
	  for(int i=1;i<=n;i++)
	   if(mp[v[i]].size()==1){
	   	cout<<-1;
	   	flag=1;
	   	break;
	   }
	   if(flag==0){
	   int k=mp[v[1]].size();
	   for(int i=1;i<=n;i+=k){
	   	k=mp[v[i]].size();
	   	vector<int> temp;
	    temp=mp[v[i]];
	    int m=mp[v[i]].size();
	    for(int i=m-1;i>0;i--){
	    	temp[i]=temp[i-1];
	    }
	    temp[0]=mp[v[i]].back();
	    for(int i=0;i<temp.size();i++) cout<<temp[i]<<" ";
	   }
	   }
	   cout<<endl;
    }
}








