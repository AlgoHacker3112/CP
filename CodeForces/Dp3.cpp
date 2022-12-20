/**
*     author:  AlgoHacker3112
*    created: 2022-12-20 13:55:40
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

 bool knapsack(vector<int>&a,vector<vector<int>>&dp,int sum , int n){
    if(sum == 0) return 1;
    if(n == 0 || sum < 0) return 0;
    if(dp[n][sum] != -1) return dp[n][sum];
    return dp[n][sum] = knapsack(a,dp,sum-a[n-1], n-1) || knapsack(a,dp,sum,n-1);

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
 int sum =0;
 for(int i=0;i<n;i++) {
 cin >> a[i];
 sum += a[i];
 }
 debug(sum);
 vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
 bool flag = knapsack(a,dp,sum,n);
int ans = INT_MAX;
for(int i=0;i<sum;i++){
   if(dp[n][i]) ans = min(ans, abs(sum - 2*i));
}
cout << ans <<endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}