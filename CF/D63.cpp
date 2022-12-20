/**
*     author:  AlgoHacker3112
*    created: 2022-12-16 12:32:19
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
#define int long long

using namespace std;

 #ifdef DEBUG
#include <bits/debug.h> // replace with your path
#else
#define debug(x)
#endif


int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 

 while(t--){
 int n,x; cin >> n >> x;
 vector<int> a(n);
 for(int i=0;i<n;i++) cin >> a[i];
 vector<vector<int>> dp(n+1,vector<int>(3));
 int sum = 0;
 int ans = 0;
 for(int i=0;i<n;i++){

   dp[i+1][0] = max(dp[i][0] + a[i], a[i]);
   dp[i+1][1] = max(x*a[i],x*a[i] + max(dp[i][1],dp[i][0]));
   dp[i+1][2] = max(a[i], a[i] + max(dp[i][1],dp[i][2]));
   ans = max({ans,dp[i+1][0],dp[i+1][1],dp[i+1][2]});
 }
  cout <<  ans <<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}