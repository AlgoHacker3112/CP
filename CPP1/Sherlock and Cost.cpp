// Problem: Sherlock and Cost
// Contest: HackerRank - Algorithms - Dynamic Programming - Sherlock and Cost - Prepare - Algorithms - Dynamic Programming
// URL: https://www.hackerrank.com/challenges/sherlock-and-cost/problem?isFullScreen=true
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


// int solve(int n){
//     
// }

int32_t main()
{
	  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    cin>>t;
    while(t--){
		 int n; cin>>n;
       int b[n];
       for(int i=0;i<n;i++){
           cin>>b[i];
       }
       int sum=0;
    // int temp=b[0];
       for(int i=0;i<n-1;i++){
          if(abs(b[i]-b[i+1])>abs(b[i]-1)){
              sum+=abs(b[i]-b[i+1]);
          }
          else if(abs(b[i]-b[i+1])<abs(b[i]-1)){
              sum+=abs(b[i]-1);
              b[i+1]=1;
          }
          else if(abs(b[i]-b[i+1])==abs(b[i]-1)){
          	sum+=abs(b[i]-b[i+1]);
          }
       }
       cout<<sum<<endl;
    }
}








