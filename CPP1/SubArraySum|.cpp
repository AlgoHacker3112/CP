
#include<bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;
 
#ifdef DEBUG
  #include "debug.h" // replace with your path
#else
  #define debug(x)
#endif
 
 

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 freopen("error.txt", "w", stderr);
  
    int t=1;
    // xcin>>t;
    while(t--){
    int n,x; 
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int sum=0;
    int ans=0;
    int j=0;
    for(int i=0;i<n;i++){
      sum+=a[i];
      while(sum>x and j<n) sum-=a[j++];
      if(sum==x) ans++;
    }
    cout<<ans<<endl;
  }

  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;


}