/**
*     author:  AlgoHacker3112
*    created: 2022-10-20 17:01:08
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
 string s; 
 cin >> s;
 vector <int> v(n);
 for(int i=0;i<n;i++) cin >> v[i];
 int l = 0;
 for(int r=0 ; r < n; r++){
    if(s[r] == '0'){
        l = r+1;
    
    while(s[l] == '1' && l < n){
        if(v[l] < v[r]){
            s[l] = '0';
            s[r] = '1';
            break;
        }
        l++;
    }
   } 
 }
 int sum = 0;
 for(int i=0;i<n;i++){
    if(s[i] == '1') sum += v[i];
 }
 cout << sum << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}