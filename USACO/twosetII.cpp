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
// vector<vector<int> > dp(501,vector<int>(62625,-1));
// int solve(int n, int sum,int Rsum){
//     if(n==0 || sum>Rsum) return 0;
//     if(sum==Rsum) return 1;
//     if(dp[n][sum]!=-1) return dp[n][sum];
//     int ans=0;
//     ans=solve(n-1,sum+n,Rsum)%rem+solve(n-1,sum,Rsum)%rem;
//     ans%=rem;
//     dp[n][sum]=ans;
//     // debug(sum);
//     return dp[n][ans];
// }

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
 if((n*(n+1)/2)%2) cout<<0<<endl;
 else{
  vector<vector<int>> dp(n+1,vector<int>(n*(n+1)/4+1,0));
  for(int i=0;i<n;i++){
    dp[i][0]=1;
  }
  int Rsum=n*(n+1)/4;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=Rsum;j++){
        dp[i][j]=dp[i-1][j]%rem;
        if(j-i>=0){
            dp[i][j]+=dp[i-1][j-i]%rem;
            // dp[i][j]%=rem;
        }
      }
  }
  cout<<dp[n][Rsum]/2<<endl;
 }
//   cout<<solve(n,0,n*(n+1)/4)<<endl;
//   cout<<n*(n+1)/4;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}