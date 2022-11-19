// Not A Triangle
#include<bits/stdc++.h>
#define ll long long
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
    while(t){

    int n; 
    cin>>n;
    if(n==0 ) return 0;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        int sum=a[i]+a[j];
        int l=j+1,h=n-1;
        int ind=-1;
        while(l<=h){
          int mid=l+(h-l)/2;
          if(a[mid]>sum) ind=mid,h=mid-1;
          else l=mid+1;
        }
        if(ind!=-1) ans+=n-ind;
      }
      
    }
    cout<<ans<<endl;
  }

  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;


}