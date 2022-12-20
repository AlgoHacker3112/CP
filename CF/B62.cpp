/**
*     author:  AlgoHacker3112
*    created: 2022-12-18 10:14:09
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
 double n,k; cin >> n >> k;
 vector<double> a(n);
 for(int i=0;i<n;i++) cin >> a[i];
 sort(all(a));

 vector<int> pre(n+1) , suf(n+1);
 for(int i=0;i<n;i++) pre[i+1] = pre[i] + a[i];
 for(int i=n-1;i>=0;i--) suf[i] = suf[i+1] + a[i];
 debug(pre);
 debug(suf);

 double l = 0, r = 1000;

 while(r - l > 1e-7){
    double x = (r+l)/2;
    auto it = upper_bound(all(a), x) - begin(a);
    debug(it);
    if((suf[it] - (n-it)*x)*(1-k/100) > (it*x -pre[it])) l = x;
    else r = x;
 }
 cout <<setprecision(9) <<fixed << l << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}