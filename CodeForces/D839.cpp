/**
*     author:  AlgoHacker3112
*    created: 2022-12-19 18:08:21
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
 vector<int> a(n);
 for(int i=0;i<n;i++){
    cin >>a[i];
 }
 int x = 0;
 for(int i=1;i<n;i++){
    if(a[i-1] > a[i]){
        x = max(x ,(a[i] + a[i-1] +1)/2);
    }
 }
 for(int i=0;i<n;i++){
    a[i] = abs(a[i] -x);
 }
 if(is_sorted(all(a))){
    cout << x << endl;
 }
 else cout << -1 << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}