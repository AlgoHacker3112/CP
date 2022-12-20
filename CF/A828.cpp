/**
*     author:  AlgoHacker3112
*    created: 2022-10-16 21:06:48
**/ 

#include <bits/stdc++.h>

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
 vector <int> v(n);
 map<int,int> freq;
 for(int i=0;i<n;i++){
    cin >> v[i];
    freq[v[i]] ++;
 }
//  map < char,int > m;
 string s; 
 cin >> s;
 debug(s);
 debug(v);
 bool flag = 0;
 map <int,char> m;
 for(int i=0;i<n;i++){
   if(m.find(v[i]) == m.end()) m[v[i]] = s[i];
   else{
       if(m[v[i]] != s[i] ) flag = 1;
   }
 }
 debug(m);
 if(flag)   cout << "NO" << endl;
 else{
        cout << "YES" << endl;
    }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}