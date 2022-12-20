/**
*     author:  AlgoHacker3112
*    created: 2022-12-19 11:13:02
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
#define ll long long

using namespace std;

 #ifdef DEBUG
#include <bits/debug.h> // replace with your path
#else
#define debug(x)
#endif

int check(vector<int> &a,int sum,int n,vector<vector<int>>&dp ){
    if(sum == 0) return 1;
    if(n == 0) return 0;
    if(dp[n][sum] != -1) return dp[n][sum];
    if(sum >= a[n-1]) return dp[n][sum] = max(check(a,sum - a[n-1], n-1,dp), check(a,sum , n-1,dp));
    return dp[n][sum] = check(a,sum, n-1,dp);
}

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
 cin>>t;
 while(t--){
 int n; cin >> n;
 vector<int> a(n);
 int sum = 0;
 for(int i=0;i<n;i++){
 cin >> a[i];
 sum += a[i];
 } 
  if(sum % 2 == 1) cout << 0 << endl;
  else{
    vector<vector<int>> dp(n+1,vector<int>(sum/2 +1));
    for(int i=0;i<=n;i++){
     for(int j=0;j<=sum/2;j++)
       dp[i][j] = -1;
    }
   bool ans = check(a,sum/2,n,dp);
   cout << ans << endl;

  }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}