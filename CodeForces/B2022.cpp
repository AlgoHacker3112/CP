/**
*     author:  AlgoHacker3112
*    created: 2022-12-17 20:40:37
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
 int n,m,k; cin >> n >> m >> k;
  vector<int> a(m);
  for(int i=0;i<m;i++) cin >> a[i];
  sort(all(a),greater<int>());
  bool flag =0;
  for(int i=0;i<m;i++){
    if(1 + (a[i]-1)*k > n) flag =1;
  }

  if( k > m || flag ) cout << "NO" << endl;
  else cout << "YES" << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}