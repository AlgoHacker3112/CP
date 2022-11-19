// Problem: A. GCD Table
// Contest: Codeforces - Codeforces Round #323 (Div. 1)
// URL: https://codeforces.com/problemset/problem/582/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
const int rem=1e9+7;
const int INF=1e18;


int inrange(int i,int j,int n,int m)
{
	if(i<0 || j<0 || i>=n || j>=m)
	return 0;
	return 1;
}
int gcd(int a,int b){
	if(b%a==0) return a;
	return gcd(b%a,a);
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
		 map<int,int,greater<int> > freq;
		 for(int i=0;i<n*n;i++){
		 	int temp; cin>>temp;
		 	freq[temp]++;
		 }
		 vector<int>ans;
		 for(auto it=freq.begin();it!=freq.end();){
		 	if(it->second>0){//freq[it] is not valid expression
		 		freq[(it->first)]--;
		 		for(int i=0;i<ans.size();i++){
		 	  	freq[(gcd(ans[i],(it->first)))]-=2;
		 		}
		 		ans.push_back(it->first);
		 	}
		 	else{
		 		it++;
		 	}
		 	
		 }
		 for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
		 
		 // sort(mp.begin(),mp.end(),greater<int>)
		 // map is already sorted don't need to sort
    }

}








