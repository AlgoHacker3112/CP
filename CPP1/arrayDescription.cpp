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
 int n,m;
 vector<int> a;
 int dp[100001][101];

 int solve(int i,int pre){
  if(i==n) return 1;
  if(dp[i][pre]!=-1) return dp[i][pre];
  int ans=0;
  if(pre==0){
   if(a[i]==0){
     for(int j=1;j<=m;j++){
         ans=(ans+solve(i+1,j))%rem;
     }
   }
   else{
       ans=(ans+solve(i+1,a[i]))%rem;
   }
  }
  else{
       if(a[i]==0){
        for(int j=max((int)1,pre-1);j<=min(m,pre+1);j++){
            ans=(ans+solve(i+1,j))%rem;
        }
       }
       else{
        if(abs(pre-a[i])<=1)
        ans=(ans+solve(i+1,a[i]))%rem;
       }
  }
  return dp[i][pre]=ans;
 }
int32_t main(){
//setIO("");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
//  cin>>t;
 while(t--){
 cin>>n>>m;
 a.resize(n);
 memset(dp,-1,sizeof(dp));
 for(int i=0;i<n;i++) cin>>a[i];
 cout<<solve(0,0)<<endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}