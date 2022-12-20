/**
*     author:  AlgoHacker3112
*    created: 2022-12-16 20:09:28
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
 int x,y,a,b,m,n;
 cin >> x >> y >> a >> b >> m >> n;
 if(x == a){
    if(y == n || b == n) cout << "NO" << endl;
    else cout << "YES" << endl;
 }
 else if(a == m){
    if(b == y || n == y) cout << "NO" << endl;
    else cout << "YES" << endl;
 }
 else if(x == m){
    if(y == b || n == b) cout << "NO" << endl;
    else cout << "YES" << endl;
 }
 else {
    cout << "YES" << endl;
 }

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}