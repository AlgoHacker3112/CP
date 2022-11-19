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
int n;
vector<int> dp;
vector<int> a;
int solve(int i){
    if(i==0) return 0;
    if(i==1) return abs(a[i]-a[i-1]);
    if(dp[i]!=-1) return dp[i];
    
    return dp[i]=min(abs(a[i]-a[i-1])+solve(i-1),abs(a[i]-a[i-2])+solve(i-2));

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
  

 a.resize(n);
 dp.resize(n);
 for(int i=0;i<n;i++) dp[i]=-1;
 for(int i=0;i<n;i++) cin>>a[i];
 
 cout<<solve(n-1)<<endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}