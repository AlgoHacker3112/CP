/**
*     author:  AlgoHacker3112
*    created: 2022-11-07 17:24:07
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

 int tt=1; 

 while(tt--){
 string s1,s2;
 cin >> s1 >> s2;
 map<int,int> home;
 map<int,int> away;
 map<int ,bool> hm;
 map<int,bool > aw;
 int m; cin >> m;
 for(int i=0;i<m;i++){
  int t; cin >> t;
  char c; cin >> c;
  int p; cin >> p;
  char card; cin >> card;
  if(c == 'a'){
    if((away[p] || card == 'r') && !aw[p]){
    cout << s2 <<" " << p << " " << t << endl;
     aw[p] = 1;
    } 
    away[p]++;
  }
  else{
    if((home[p] || card == 'r') && !hm[p]){
    cout << s1 <<" " << p << " " << t << endl;
    hm[p] = 1;
    } 
    home[p]++;
  }
 }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}