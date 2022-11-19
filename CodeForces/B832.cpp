/**
*     author:  AlgoHacker3112
*    created: 2022-11-04 20:14:56
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
 int temp = n;
 while(temp--) s += "BAN";
 debug(s);
 
 int j = 3*n -1;
 vector<pair<int,int>> v;
 int count = 0;
 
 for(int i=0;i<3*n;i++){
     if(s[i] == 'A' && i<j){
        while(s[j] != 'N') j--;
        if(i<j) v.push_back({i+1,j+1});
        if(i<j) swap(s[i],s[j]);
        }
}
 
//  cout << s << endl;
  cout << v.size() << endl;
  for(int i=0;i<v.size();i++) cout << v[i].first << " " << v[i].second << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}