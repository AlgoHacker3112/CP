/**
*     author:  AlgoHacker3112
*    created: 2022-11-03 14:01:43
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

//  int n; cin >> n; 
string s;
string ans;
getline(cin , s);
 for(int i=0;i<s.length();i++){
   if(s[i] != ' ' && s[i] != ',' && s[i] != '?' && s[i] != '!' && s[i] != '.'){
      ans += s[i];
   }
   else if(s[i] == ',' || s[i] == '!' || s[i] == '?' || s[i] == '.'){
     if(ans.back() == ' ') ans.pop_back();
     ans += s[i];
     ans += " ";
   }
   else if(s[i] == ' '){
      if(ans.back() != ' ') ans += ' ';
   }
 }
 cout << ans << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}
