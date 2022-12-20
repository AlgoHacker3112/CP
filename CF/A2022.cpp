/**
*     author:  AlgoHacker3112
*    created: 2022-12-17 20:07:06
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
 string s; cin >> s;
 string ans ="";
 int count = 0;
 for(int i=1;i<n;i++){
    if(s[i] == '1') count ++;
    if(count % 2) ans += "-";
    else ans += "+";
 }
  cout << ans << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}