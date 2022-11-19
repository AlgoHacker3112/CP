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
		 int n,c; cin>>n>>c;
		 vector<int> v(n);
		 for(int i=0;i<n;i++) cin>>v[i];
		 sort(v.begin(),v.end());
		 int l=0,h=100000;
		 int ans=0;
		
		
		
		 while(l<h){
		 	int d=l+(h-l)/2;
		 	int temp=v[0];
		 	int count=1;
		 	
		 	
		 	for(int i=1;i<n;i++){
		 		if(temp+d<=v[i]){
		 			temp=v[i];
		 			count++;
		 		}
		 		
		 		}
		 		cerr<<count<<" "<<d<<endl;
		 		
		 		if(count>=c){
		 			ans=d;
		 			l=d+1;
		 		} 
		 		
		 		else h=d-1;
		 		
		 	}
		 		 cout<<ans<<endl;
		 }
	
    }









