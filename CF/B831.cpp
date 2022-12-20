/**
*     author:  AlgoHacker3112
*    created: 2022-10-30 10:32:06
**/ 

#include <bits/stdc++.h>
#define int long long
using namespace std;

 #ifdef DEBUG
#include <bits/debug.h> // replace with your path
#else
#define debug(x)
#endif


int32_t main(){

ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
 cin>>t;
 while(t--){
 int n; cin >> n;
 vector<pair<int,int> > v;
 for(int i=0;i<n;i++){
    int a, b;
    cin >> a >> b;
    if(a>b)
    v.push_back({a,b});
    else 
    v.push_back({b,a});
 }
  sort(begin(v),end(v));
  debug(v);
  int ans = v[0].first + 2*v[0].second ;
  for(int i=1;i<n;i++){
    ans += (2*v[i].second + (v[i].first - v[i-1].first));
  }
  ans += v[n-1].first;
  cout << ans << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}