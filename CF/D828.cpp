/**
*     author:  AlgoHacker3112
*    created: 2022-10-20 17:58:41
**/ 

#include <bits/stdc++.h>

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
 vector <int> v(n);
 int count = 0;
 vector <int> a(n);
 for(int i=0;i<n;i++) cin >> v[i];
 for(int i=0;i<n;i++){
    while(v[i]%2 == 0){
        count++;
        v[i]/=2;
    }
    int temp =i+1;
    int cnt =0;
    while(temp%2 == 0){
      cnt++;
      temp/=2;
    }
    a[i] = cnt;
 }
 sort(begin(a),end(a),greater <int> ());

  if(count < n){
    int ans = 0;
    int i;
      for( i=0;i<n;i++){
         ans++;
         count += a[i];
         if(count >= n){
            cout << ans << endl;
            break;
         }
      }
      if(i == n) cout << -1 <<endl;
  }
  else{
    cout << 0 << endl;
  }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}