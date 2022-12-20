/**
*     author:  AlgoHacker3112
*    created: 2022-12-12 20:01:35
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
 int digits =0;
 int lastD;
 while(n){
   lastD = n%10;
   n /= 10;
   digits++;
 }
  cout << 9*(digits -1)  + lastD << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}