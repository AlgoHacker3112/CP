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
 int n; cin>>n;
 vector<int> dp(n+1,0);
 dp[0]=1;
 
 for(int i=1;i<=n;i++){
    for(int j=1;j<=6;j++){
      if(i>=j) dp[i]=(dp[i-j]+dp[i])%rem;
    }
 }
 cout<<dp[n]<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}