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
    // cin>>t;
    while(t--){
		 int n,k; cin>>n>>k;
		 int a[n];
		 deque<int> dq;
		 vector<int> ans;
		 for(int i=0;i<n;i++) cin>>a[i];
		 int i=0;
		 for(i=0;i<k;i++){
		 	while(!dq.empty() and dq.back()<=a[i]) dq.pop_back();
		 	dq.push_back(a[i]);
		 
		 }
		 if()
		 	cout<<dq.front()<<" ";
		 for(;i<n;i++){
		 	
		 		while(!dq.empty() and dq.back()<=a[i]) dq.pop_back();
		  	dq.push_back(a[i]);
		  	cout<<dq.front()<<" ";
		  	cout<<endl;
		 }
		
    //for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
   }
}








