/**
*     author:  AlgoHacker3112
*    created: 2022-10-15 20:11:56
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
 int n,k; cin >> n >> k;
 vector<int> v(n);
 bool flag = 0;
 for(int i=0;i<n;i++){
 cin >> v[i];
 if(v[i]) flag =1;
 } 
 if(flag) cout << "YES" << endl;
 else cout << "NO" << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}