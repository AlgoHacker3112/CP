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
 int n,h,m; cin>>n>>h>>m;
 int min_=h*60+m;
 int ans=INT_MAX;
 for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    int min1=a*60+b;
    ans=min(ans,(min1-min_+24*60)%(1440));

 }
  cout<<ans/60<<" "<<ans%60<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}