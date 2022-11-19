
#include<bits/stdc++.h>


#warning change ll
#define ll long long
#define ld long double

using namespace std;
 
#ifdef DEBUG
  #include<bits/debug.h> // replace with your path
#else
  #define debug(x)
#endif
 
 int gcd(int a,int b){
  if(a==0) return b;

  return gcd(b%a,a);
 }

int32_t main() {
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("error.txt", "w", stderr);
    int t=1; 
    // cin>>t;
    while(t--){
     int n; cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     vector<int> pre(n+1),suf(n+1);
     pre[0]=a[0];
     suf[n]=a[n-1];
     for(int i=0;i<n;i++) pre[i+1]=gcd(a[i],pre[i]);
     for(int i=n-1;i>=0;i--) suf[i]=gcd(a[i],suf[i+1]); 
     int ans=1;
     debug(pre);
     debug(suf);
     ans=max(ans,suf[1]);
     for(int i=1;i<n-1;i++) ans=max(ans,gcd(pre[i],suf[i+1]));
     ans=max(ans,pre[n-1]);
     cout<<ans<<endl;
    }

  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;


}