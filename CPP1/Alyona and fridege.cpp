
#include<bits/stdc++.h>
 #define int long long
// #define ld long double

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
    int n,h; 
    cin>>n>>h;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int low=0,high=n;
    int ans=0;

    while(low<=high){
      vector <int> b=a;
      int k =low+(high-low)/2;
      sort(b.begin(),b.begin()+k);
      int sum=0;
      for(int  i=k-1;i>=0;i-=2) sum+=b[i];
      if(sum<=h) ans=k,low=k+1;
      else if (sum>h) high=k-1;
       
    }
    cout<<ans<<endl;
  }

  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;


}