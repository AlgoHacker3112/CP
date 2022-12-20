/**
*     author:  AlgoHacker3112
*    created: 2022-10-15 20:22:02
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
 for(int i=0;i<n;i++) cin>>v[i];
 if(is_sorted(begin(v),end(v))) cout << 0 << endl;
 else{
    bool flag =0;
    int count=0;
    for(int i=n-1;i>=0;i--){
     if(v[i] == 0) flag =1;
     if(flag && v[i] ) count++;
    }
    debug(count);
    int ans =0;
    flag = 0;
    for(int i=n-1;i>=0;i--){
        if(v[i] == 0 && count) count--,flag =1,ans++;
        if(flag && v[i] == 1) count--;
        if(count == 0) break;
    }
    cout << ans << endl;
 }

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}