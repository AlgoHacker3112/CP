/**
*     author:  AlgoHacker3112
*    created: 2022-11-05 19:31:08
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
#define int long long
// #define int long long

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
 int n,k; cin >> n >> k;
 vector<int> v(n);
 for(auto &c:v) cin >> c;
 sort(all(v));
 vector<int> pre(n+1);
 for(int i=0;i<n;i++){
    pre[i+1] = pre[i] + v[i];
 }
 debug(pre);
 int l = -1, r=1e10;
 int minOp =-1;
 while(l <= r){
    int mid = l + (r-l)/2;
    bool flag =0;
    for(int i=0;i<=min(n-1,mid);i++){
        if(pre[n-i] - v[0] + (v[0]-mid + i)*(i+1) <= k){
            flag = 1;
        }
    }
    if(flag){
        r = mid -1;
        minOp = mid;

    }
    else{
      l = mid + 1;
    }
 }
  cout << minOp << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}