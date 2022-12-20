/**
*     author:  AlgoHacker3112
*    created: 2022-12-15 20:10:47
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
 vector<int> v(n);
 int odd = 0;
 bool flag = 0;
 
 for(int i=0;i<n;i++){
    cin >> v[i];
    if(v[i] % 2 == 1) odd++;
 }
 if(odd % 2 == 1){
    int ans = 100;
  for(int i=0;i<n;i++){
      if(v[i] % 2 == 0){
        int count = 0;
        while(v[i] % 2 == 0){
            count++;
            v[i] /= 2;
        }
        ans = min(ans, count);
      }
      else{
        int count = 0;
        while(v[i] % 2 == 1){
            count ++;
            v[i] /= 2;
        }
        ans = min(count, ans);
      }
  }
  cout << ans << endl;
 }
 else cout << 0 << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}