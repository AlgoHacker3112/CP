#include <bits/stdc++.h>
#warning change ll
#define int long long
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
 cin>>t;
 while(t--){
 int n; cin>>n;
 int a[n];

 for(int i=0;i<n;i++) cin>>a[i];

 vector<int> diff(n+1);
 diff[0]=0;

 for(int i=0;i<n-1;i++){
    diff[i+1]=a[i+1]-a[i];
 }
  int ans=0;
  int add=0;
  for(int i=1;i<=n;i++){
     if(diff[i]>0) add+=diff[i];
     ans+=abs(diff[i]);
  }
  ans+=abs(a[n-1]-add);
  cout<<ans<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}