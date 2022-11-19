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
const int Max=1000;
int n;
char mat[Max][Max];
int dp[Max+1][Max+1];
int solve (int r,int c)
{
    if(r==n-1 and c==n-1) return 1;
    if(r==n) return 0;
    if(c==n) return 0;
    if(mat[r][c]=='*') return 0;
    if(dp[r][c]!=-1) return dp[r][c];
    int ans=0;
    
    ans=(ans+solve(r+1,c)+solve(r,c+1))%rem;
   
    return dp[r][c]=ans;
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
 cin>>n;
 memset(dp,-1,sizeof(dp));
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>mat[i][j];
    }
 }
  if(mat[0][0]=='*' || mat[n-1][n-1]=='*') cout<<0<<endl;
  else
  cout<<solve(0,0)<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}