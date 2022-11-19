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

 void setIO(string s) {
 freopen((s + ".in").c_str(), "r", stdin);
 freopen((s + ".out").c_str(), "w", stdout);
 }
int32_t main(){
setIO("pails");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 //  cin>>t;
 while(t--){
 int x,y,m; cin>>x>>y>>m;
 int n=m/x;
 int temp=m;
 int ans=10000;
 for(int i=0;i<=n;i++){
    ans=min(ans,m%y);
    m-=x;
 }

 cout<<temp-ans<<endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}