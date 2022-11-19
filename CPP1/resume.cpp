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


int32_t main(){

ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
   int t=1; 
//    in>>t;
 while(t--){
 int n,k; cin>>n>>k;
 int a[n];
 for(int i=0;i<n;i++) cin>>a[i];
 int m=0;
 for(int i=0;i<n;i++){
    m= max(a[i],m);
 }

 ll l=m,h=1e16;
 ll ans=0;
 while(l<=h){

    ll mid=l+(h-l)/2;
    int count=1;
    ll sum=0;
    for(int i=0;i<n;i++){
       sum+=a[i];
       if(sum>mid) sum=a[i],count++;
    }
    if(count<=k){
        ans=mid; 
        h=mid-1;
    } 
    else l=mid+1;
 }
  cout<<ans<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}