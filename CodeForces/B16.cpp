/**
*     author:  AlgoHacker3112
*    created: 2022-11-05 23:27:51
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
//  cin>>t;
 while(t--){
 int n; cin >> n;
 vector<int> v(n);
 for(auto &c : v) cin >> c;
 sort(all(v));
 if(n%2 == 1) cout << v[n/2] << endl;
 else cout << v[n/2-1] << endl;
 debug(v);
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}