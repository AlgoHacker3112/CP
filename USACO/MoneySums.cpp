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
 int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
vector<vector<int> >dp(101,vector<int>(100001,0));
// memset(dp,0,sizeof(dp));
dp[0][0]=1;
for(int i=1;i<=n;i++){
     for(int j=0;j<=100000;j++){
        dp[i][j]=dp[i-1][j];
        int rem=j-a[i-1];
        if(rem>=0 and dp[i-1][rem]){
            dp[i][j]=dp[i-1][rem];
        }

    }
}
vector<int> ans;
for(int i=1;i<100001;i++){
    if(dp[n][i])
    ans.push_back(i);
}
cout<<ans.size()<<endl;
int m=ans.size();
for(int i=0;i<m;i++) cout<<ans[i]<<" ";
cout<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}