/**
*     author:  AlgoHacker3112
*    created: 2022-11-15 00:30:51
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
#define ll long long

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
 while(t--){
 int n; cin >> n;
 vector<int> v(n);
 for(auto &c : v) cin >> c;
 vector<int> pre(n+1),suf(n+1);
 for(int i=0;i<n;i++){
    pre[i+1] = pre[i] | v[i];
 }
 for(int i=n-1;i>=0;i--){
    suf[i] = suf[i+1] | v[i];
 }
 ll mx = -1;
 int index = -1;
 for(int i=0;i<n;i++){
    ll bor = pre[i] | suf[i+1];
    ll ans = v[i] & (~bor);
    if(mx < ans ){
        index = i;
        mx = ans;
    }
 }
 debug(index);
 cout << v[index] <<" ";
 for(int i=0;i<n;i++){
    if(index == i) continue;
    cout << v[i] << " ";
 }
 cout << endl;
 
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}