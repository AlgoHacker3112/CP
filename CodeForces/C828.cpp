/**
*     author:  AlgoHacker3112
*    created: 2022-10-20 17:45:43
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
 char c; 
 cin >> c;
 string s; 
 cin >> s;
 s += s;

 int ans = -1;
 for(int i = 0;i<2*n;i++){
    int temp =0;
    if(s[i] == c){
        while(s[i] != 'g' && i < 2*n){
            temp++;
            i++;
        }
    
        ans = max(ans, temp);
    }
 }
 cout << ans << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}