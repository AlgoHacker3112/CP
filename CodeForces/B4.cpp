/**
*     author:  AlgoHacker3112
*    created: 2022-11-05 16:59:05
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
ll pow(ll a, ll b){
    ll ans = 1;
    while(b){
        a = a*a;
        if(b%2) ans *= a;
        b/=2;
    }
   return ans;
}

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
//  cin>>t;
 while(t--){
 int n,m; cin >> n >> m;
 vector<vector<int> > mat(n,vector<int> (m));
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> mat[i][j];
    }
 }
 ll ans = 0;
 for(int i=0;i<n;i++){
    int a = 0,b = 0;
    for(int j=0;j<m;j++){
       if(mat[i][j]) a++;
       else b++;
    }
     debug(a);
     debug(b);
     ans += pow(2,a) + pow(2,b) -(a + b + 1 + 1);
 }
 debug(ans);
 for(int i=0;i<m;i++){
    int a = 0,b = 0;
    for(int j=0;j<n;j++){
       if(mat[j][i]) a++;
       else b++;
    }
    debug(a);
    debug(b);
     ans += pow(2,a) + pow(2,b) -(a + b + 1 + 1);
 }
   debug(ans);
   cout << ans + m*n << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}