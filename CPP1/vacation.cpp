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
int dp[100001][3];
int a[100000][3];
int solve(int n,int j){

    if(n==1) return a[0][j];
    if(dp[n][j]!=-1) return dp[n][j];
    int ans=-1;
    for(int i=0;i<3;i++){
        if(i!=j) 
        ans=max(solve(n-1,i)+a[i][j],ans);
    }
    return dp[n][j]=ans;
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
 int n; cin>>n;
 memset(dp,-1,sizeof(dp));
 for(int i=0;i<n;i++) for(int j=0;j<3;j++) cin>>a[i][j];
 cout<<max({solve(n,0),solve(n,1),solve(n,2)})<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}