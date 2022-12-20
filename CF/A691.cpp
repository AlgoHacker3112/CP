/**
*     author:  AlgoHacker3112
*    created: 2022-11-05 23:08:05
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
#define ll long long

using namespace std;

 #ifdef DEBUG
#include <bits/debug.h> // replace with your path
#else
#define debug(...)
#endif

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
//  cin>>t;
 while(t--){
 int n,m; cin >> n >> m;
 vector <ll > a(n),b(m);
 for(auto &c : a) cin >> c;
 for(auto &c : b) cin >> c;
 ll gcd_ = 0;
 for(int i=0;i<n;i++){
     gcd_ = gcd(gcd_ , abs(a[i] - a[0]));
 }
 for(int i=0;i<m;i++){
    cout << gcd(gcd_,a[0] + b[i]) <<" " ;
 }
 cout << endl;
 debug(n,m,b,a);
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}