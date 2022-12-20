/**
*     author:  AlgoHacker3112
*    created: 2022-11-01 16:42:39
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
 int n,m; cin >> n >> m;
 vector<int> a(n),b(m);
 for(auto &c : a) cin >> c;
 for(auto &c : b) cin >> c;
 sort(all(a));
 for(int i=0;i<m;i++){
    auto it = upper_bound(all(a),b[i]) - begin(a);
    cout << it << " ";
 }

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}