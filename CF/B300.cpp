/**
*     author:  AlgoHacker3112
*    created: 2022-11-06 17:32:50
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
//  cin>>t;
 while(t--){
 int n; cin >> n;
 string s; 
 s += to_string(n);
 bool flag =0;
 vector<int> ans;
 while(!flag){
    int j=0;
    while(s[j] == '0') j++;
    if(j==s.length()){
        flag = 1;
        break;
    }
    string s1 ="";
    for(int i=j;i<s.length();i++){
    if(s[i] != '0'){
         s1 += '1';
         s[i]--;
    }
    else s1 += '0';
  }
   if(s1.length() > 0) ans.push_back(stoi(s1));
 }
 cout << ans.size() << endl;
 for(auto c:ans) cout << c << " ";
 cout << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}