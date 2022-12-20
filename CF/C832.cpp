/**
*     author:  AlgoHacker3112
*    created: 2022-11-04 21:08:02
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
 cin>>t;
 while(t--){
 int n; cin >> n;
 vector<int> a(n);
 ll sum = -1;
 bool flag =0;
 int mi = INT_MAX;
 for(int i=0;i<n;i++){
    cin >> a[i];
    mi = min(a[i],mi);
 }
 if(mi == a[0] || a[0] == 1) cout << "Bob" << endl;
 else cout << "Alice" << endl;
 cerr << mi << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}