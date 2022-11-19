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
//setIO("");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 int n,x; cin>>n>>x;
 int a[n];
 for(int i=0;i<n;i++) cin>>a[i];
 int min_=a[0];
 int max_=a[0];
 int ans=0;
 for(int i=1;i<n;i++){

   min_=min(min_,a[i]);
   max_=max(max_,a[i]);
   
   if(abs(min_-max_)>2*x){
    min_=a[i];
    max_=a[i];
    ans++;
   }
 }
 cout<<ans<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}