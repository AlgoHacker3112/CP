/**
*     author:  AlgoHacker3112
*    created: 2022-10-17 20:04:37
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
 for(int i =0;i<n;i++) cin >> v[i];
 cout << (10 -n)*(10 -n -1)/2 * 6 << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}