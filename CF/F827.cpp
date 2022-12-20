/**
*     author:  AlgoHacker3112
*       
**/

#include <bits/stdc++.h>
#define int long long
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
 int flag1 =0, flag2 =0;
 int slen = 1, tlen =1 ;
 for(int j = 0; j<n ;j++){
    int d,k;
    string s;
    cin >> d >> k >> s;
    if(d == 1){
        slen += s.length()*k;
        for(int i=0; i < s.length();i++){
            if(s[i] != 'a') flag1 =1;
        }
    }
    else{
         tlen += s.length()*k;
         for(int i =0;i<s.length();i++){
            if(s[i] != 'a') flag2 =1 ;
         }
    }
    if(tlen <= slen and !flag1 and !flag2 || flag1 && !flag2){
        cout << "NO" << endl;
    }
    else cout << "YES" << endl;
 }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}