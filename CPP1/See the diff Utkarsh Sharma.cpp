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
		for(int i=0;i<n;i++) cin>>arr[i];
		// int i=0;
		// for(int k=0;k<n;k++){
			// if(arr[k]<0) continue;
			// else{
				// i=k;
				// break;
			// }
		// }
		// if(i==0 and arr[0]<0){
			   // sort(arr,arr+n);
			   // cout<<arr[n-1]<<endl;
    // }
    // else{
    	// int mx=0;
//     	
    	// for(int k=i;k<n;k++){
    		// int  sum=0;
    		// for(int j=k;j<n;j++){
    			// if(arr[j]<0) mx=max(sum,mx);
    		  // if(sum>=0) sum+=arr[j];
    		  // if(j==n-1) k=n-1;
    		  // if(sum<0){
    		  	// for(int m=j;m<n;m++){
    		  		// if(arr[m]>0) k=m;
    		  		// break;
    		  	// }
    		  	// break;
    		  // }
    		// }
    	// }
    	// cout<<mx<<endl;
    // }
    // }
// }
// 


// altnate code
int ans=INT_MIN;
int sum=0;
for(int i=0;i<n;i++){
	sum+=arr[i];
	ans=max(ans,sum);
	if(sum<0) sum=0;
}
cout<<ans<<endl;
}
}



