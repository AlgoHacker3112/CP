/**
*     author:  AlgoHacker3112
*    created: 2022-12-20 15:13:32
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
int knapsack(vector<int> &a,int sum , vector<vector<int>> &dp,int n){
    if(sum == 0) return 1;
    if(n == 0 || sum < 0) return 0;
    if(dp[n][sum] != -1) return dp[n][sum];

    return dp[n][sum] = knapsack(a,sum-a[n-1],dp,n-1) + knapsack(a,sum,dp,n-1);
}

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
 cin>>t;
 while(t--){
 int n,k; cin >> n >> k;
 vector<int> a(n);
 int sum = 0;
 for(int i=0;i<n;i++){
  cin >> a[i];
  sum += a[i];
 }
 debug(sum);
 if((sum + k) % 2 ) cout << 0 <<endl;
 else{
    sum = (sum + k)/2;
 vector<vector<int>> dp(n+1,vector<int>(sum + 1,-1));
 cout << knapsack(a,sum,dp,n) <<endl;

 }
 

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}