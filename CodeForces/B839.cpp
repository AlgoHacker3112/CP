/**
*     author:  AlgoHacker3112
*    created: 2022-12-18 20:16:48
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
 int a,b,c,d; cin >> a >> b >> c >>d;
 bool flag =0;
 if((a > b && c < d) || (a < b && c > d)) flag = 1;
 if((a > c && b < d) || (a < c && b > d)) flag = 1;
 if(flag) cout << "NO" << endl;
 else cout <<"YES" << endl;



 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}