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

 int n,x;
 vector<int>h,s;
 

int32_t main(){
//setIO("");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
//  cin>>t;
 while(t--){
 cin>>n>>x;
 h.resize(n);
 s.resize(n);
 for(int i=0;i<n;i++) cin>>h[i];
 for(int i=0;i<n;i++) cin>>s[i];

int dp[n+1][x+1];
 for(int i=0 ;i<n;i++){
    for(int j=0;j<=x;j++){
        if(j==0) dp[i][j]=0;
        else{
        int op1=(i==0)?0: dp[i-1][j];
        int op2=(h[i]>j )?0: (i!=0) ? dp[i-1][j-h[i]]+s[i] : s[i];
         dp[i][j]=max(op1 , op2);
        }
    }
 }
 cout<<dp[n-1][x]<<endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}