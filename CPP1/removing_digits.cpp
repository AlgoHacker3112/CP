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
const int Max=1e6+1;
int dp[Max];

int solve(int n){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int ans=INT_MAX;
    int temp=n;
    
    while(temp){
        int x=temp%10;
        // int ways=solve(n-x);

        if(x!=0) ans=min(ans,solve(n-x)+1);
        temp/=10;
    }
    return dp[n]=ans;
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
 cout<<solve(n)<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}