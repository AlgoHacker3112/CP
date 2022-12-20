/**
*     author:  AlgoHacker3112
*    created: 2022-12-17 21:57:14
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
 int cnt1 = 0, cnt0 = 0;

 for(int i=0;i<n-1;i++){
   if(s[i] == '1') cnt1++,cnt0 = 0;
   else cnt0++,cnt1 = 0;
   if(s[i] == '1'){
    cout << i+2 - cnt1 << " ";
   }
   else cout << i+2 - cnt0 << " ";
 }
 cout << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}