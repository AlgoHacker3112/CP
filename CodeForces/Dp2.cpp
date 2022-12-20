/**
*     author:  AlgoHacker3112
*    created: 2022-12-20 10:43:33
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

int knapsack(vector<int>&a,int sum,int n,vector<vector<int>> &dp){

    if(sum == 0) return 1;
    if(n == 0 || sum < 0) return 0;

    return dp[sum][n] = knapsack(a,sum - a[n-1],n-1,dp) + knapsack(a,sum,n-1,dp);
}

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
 cin>>t;
 while(t--){
 int n,sum; cin >> n >> sum;
 vector<int> a(n);
 for(int i=0;i<n;i++) cin >> a[i];
 vector<vector<int> > dp(n+1,vector<int> (sum +1,-1));
 int ans = knapsack(a,sum,n,dp);
 cout << ans <<endl;
 debug(dp);
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}