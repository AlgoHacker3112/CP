/**
*     author:  AlgoHacker3112
*    created: 2022-11-09 21:03:02
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
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
 int n,l,r; cin >> n >> l >> r;
 vector<int> v(n);
 for(int i=0;i<n;i++) cin >> v[i];
 sort(all(v));
 debug(v);
 int ans = 0;
 for(int i=0;i<n-1;i++){
    auto it = lower_bound(v.begin() + i+1 ,v.end(),l-v[i]) - v.begin();
    debug(it);
      
    auto it1 = upper_bound(v.begin() ,v.end(),r-v[i]) - v.begin(); 
    debug(it1);
     if(it1 > it) ans += (it1 - it);

 }
  cout << ans<<endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}