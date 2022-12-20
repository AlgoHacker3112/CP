/**
*     author:  AlgoHacker3112
*    created: 2022-11-08 00:52:45
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
 int n; cin >> n;
 vector<int> s(n),c(n); 
 for(int i=0;i<n;i++) cin >> s[i];
 for(int i=0;i<n;i++) cin >> c[i];
 vector<int> minC(n,INT_MAX);
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(s[j] > s[i]) minC[i] = min(minC[i],c[j]);
    }
 }
 debug(minC);
 int ans =INT_MAX;
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n-1;j++){
        if(s[j] > s[i] && minC[j] != INT_MAX){
        ans = min(ans,c[i]+c[j]+minC[j]);
        } 
    }
 }
 if(ans == INT_MAX) cout << -1 << endl;
 else cout << ans <<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}