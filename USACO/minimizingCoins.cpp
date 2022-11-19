#include <bits/stdc++.h>
#warning change ll
#define ll long long
#define ld long double
const int rem=1e9+7;

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
 int n,x; cin>>n>>x;
 int coins[n];
 for(int i=0;i<n;i++) cin>>coins[i];

 vector<int> dp(x+1,rem);
 dp[0]=0;
 for(int i=1;i<=x;i++){
    // dp[i]=INT_MAX;
    for(int j=0;j<n;j++){
        if(i>=coins[j]){
            dp[i]=min(dp[i],dp[i-coins[j]]+1);
            // dp[i]%=rem;
        }
    }
    
 }
cout<<((dp[x]==rem)?-1:dp[x])<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}