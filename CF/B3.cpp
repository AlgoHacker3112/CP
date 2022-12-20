/**
*     author:  AlgoHacker3112
*    created: 2022-11-06 20:22:13
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
 char tmp = s[0];
 ll cnt = 0,mx = 0;

 ll countZ = 0, countO = 0, cntZ = 0, cntO = 0;
 for(int i=0;i<s.length();i++){
     if(s[i] == '0') countZ++;
     else countO++;
     if(tmp == s[i]) cnt++;
     else cnt = 1;
     mx = max(mx,cnt);
     tmp = s[i];
 }
 debug(mx);
   cout << ((mx*mx >= countO*countZ) ? mx*mx : countO*countZ) << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}