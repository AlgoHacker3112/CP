/**
*     author:  AlgoHacker3112
*    created: 2022-11-02 20:43:31
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

 while(t--){
 int n,k; cin >> n >> k;
 string s; 
 cin >> s;
 debug(s);
 int index = 0;
 for(int i=1;i<n;i++){
      if(s.substr(i,n-i) == s.substr(0,n-i)){
        index = i;
        break;
      }
 }
 debug(index);
 cout << s ;
 
 string s1 = s.substr(n-index,index);
 if(index == 0) s1 = s;
 for(int i=1;i<k;i++){
    cout << s1 ;
 }
 cout << endl;
 debug(s1.length());
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}