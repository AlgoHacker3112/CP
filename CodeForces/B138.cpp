/**
*     author:  AlgoHacker3112
*    created: 2022-10-20 20:26:10
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
 vector <int> a(n);
 vector<int> b(n);
 int ans = 0;
 for(auto &c : a){
 cin >> c;
 ans += c;
 } 
 int mx = INT_MIN;
 for(auto &c : b){
  cin >> c;
  ans += c;
  mx = max(mx , c);
 }
 debug(ans);
 cout << ans - mx << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}