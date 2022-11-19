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
setIO("planting");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
//  cin>>t;
 while(t--){
 int n; cin>>n;
 vector<int> deg(n+1);
 for(int i=0;i<n-1;i++){
    int f1,f2; cin>>f1>>f2;
    deg[f1]++;
    deg[f2]++;
 }
 debug(deg);
  int ans=0;
  for(int i=1;i<n+1;i++){
    ans=max(ans,deg[i]);
  }
  cout<<ans+1<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}