#include <bits/stdc++.h>
#warning change ll
#define ll long long
#define ld long double

using namespace std;

 #ifdef DEBUG
#include <bits/debug.h> // replace with your path
#else
#define debug(x)
#endif


int32_t main(){
//setIO("");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
//  cin>>t;
 while(t--){
 int n,k; cin>>n>>k;
 int dp[n];
 int a[n];
 for(int i=0;i<n;i++) cin>>a[i];
 dp[0]=0;
 for(int i=1;i<k;i++) dp[i]=abs(a[i]-a[0]);
 for(int i=k;i<n;i++){
     int ans=INT_MAX;
     int K=k;
  while(K){
        int cost=dp[i-K]+abs(a[i]-a[i-K]);
        ans=min(cost,ans);
        K--;
    }
  dp[i]=ans;
 }
 cout<<dp[n-1]<<endl;

 }
// cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}