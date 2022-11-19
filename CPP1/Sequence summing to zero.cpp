
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
  
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
 freopen("error.txt", "w", stderr);
  
    int t=1;
    // cijn>>t;
    while(t--){
    int n; 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<long long> pre(n+1);
    vector<vector<int>> v(7);
 
    int ans=0;
    for(int i=0;i<n;i++){
    pre[i+1]=pre[i]+a[i];  
      
      if(pre[i+1]%7==0) ans=i+1; 
      else v[pre[i+1]%7].push_back(i+1); 
      
    }
    
    for(int i=1;i<7;i++){
      int diff=-1; 
      if(v[i].size()>=2) diff=v[i][v[i].size()-1]-v[i][0];
      ans=max(ans,diff);
    }

    
    cout<<ans<<endl;
  }
  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;


}