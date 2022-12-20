/**
*     author:  AlgoHacker3112
*    created: 2022-11-01 17:27:51
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

int gcd(int a, int b){
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
 int n; cin >> n;
 vector<vector<ll> > m(n,vector<ll>(n));
 for(int i=0;i<n;i++)
  for(int j=0;j<n;j++) 
    cin >> m[i][j];

    vector<ll> ans(n);
    ans[0] = sqrt((m[0][1]*m[0][2])/m[1][2]);
    for(int i=1;i<n;i++) ans[i] = m[0][i] / ans[0];
    for(auto c:ans) cout << c<<" ";
 
  }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}