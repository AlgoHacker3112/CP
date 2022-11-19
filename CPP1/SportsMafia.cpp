
#include<bits/stdc++.h>


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
    long long int l=0,h=1e9+1;
    int ans;
    while(l<=h){
     long long mid=l+(h-l)/2;
      long long sum=mid*(mid+1)/2;
      if(k+n-mid==sum){
        ans=mid;
        break;
      }
      else if(k+n-mid>=sum) l=mid+1;
      else h=mid-1;
    }
    cout<<n-ans<<endl;
  }

  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;

  
}