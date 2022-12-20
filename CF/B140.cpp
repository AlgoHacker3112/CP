/**
*     author:  AlgoHacker3112
*    created: 2022-12-16 20:57:59
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
 cin>>t;
 while(t--){
 int n; cin >> n;
 int x; 
 cin >> x;
 vector<int> a(n-1);
 for(int i=0;i<n-1;i++) cin >> a[i];
 sort(all(a));
 for(int i=0;i<n-1;i++){
    if(x < a[i]) x = (x+a[i]+1) / 2;
 }
 cout << x << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}