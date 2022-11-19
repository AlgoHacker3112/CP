
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
    // cin>>t;
    while(t--){
    int n,k; 
    cin>>n>>k;
    vector<int>pre(n+1);
    for(int i=0;i<k;i++){
      int a,b; cin>>a>>b;
      pre[a-1]+=1;
      pre[b]-=1;
    }
    for(int i=1;i<n;i++){
      pre[i]+=pre[i-1];
    }
     debug(pre);
    sort(pre.begin(),pre.end()-1);
     if(n%2) cout<<pre[n/2];
     else cout<<(pre[n/2-1]+pre[n/2])/2<<endl;
    debug(pre);
  }

  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;


}