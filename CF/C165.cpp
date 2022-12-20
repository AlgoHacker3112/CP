/**
*     author:  AlgoHacker3112
*    created: 2022-12-09 23:41:28
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
 int mx = 0;
 for(int i=0;i<n;i++){
    int k , a;
    cin >> k >> a;
    cerr << 3/2;
    int g =ceil(log2(a)/2);
    debug(g);
    mx = max(mx, k+g);
    if(mx == k) mx += 1; 
 }
   cout << mx  << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}