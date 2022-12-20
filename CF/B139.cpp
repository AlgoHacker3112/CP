/**
*     author:  AlgoHacker3112
*    created: 2022-12-12 20:15:57
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
 string s;
 cin >> s;
 map<string, bool > m;
 bool flag = 0;
 for(int i=0;i<n-3; i++){
    string c ;
    c += s.substr(i,2);
    m[c] = 1;
    string check ;
     check += s.substr(i+2,2);
     if(m[check] == 1){
        flag = 1;
        debug(c);
        break;
     }
 }
  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}