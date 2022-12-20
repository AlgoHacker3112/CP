/**
*     author:  AlgoHacker3112
*    created: 2022-11-06 21:31:53
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
#define ll long long
const int rem =998244353;

using namespace std;

 #ifdef DEBUG
#include <bits/debug.h> // replace with your path
#else
#define debug(x)
#endif
int divisor(int n){
    int k = sqrt(n);
    int count =0;
    for(int i=1;i<=k;i++){
        if(n%i == 0){
            count++;
            if(n/i != i) count++;
        }
    }
    return count;
}
int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
 cin>>t;
 while(t--){
 ll n,m; cin >> n >> m;
 vector<ll> v(n);
 bool flag = 0;
 for(int i=0;i<n;i++){
    cin >> v[i];
    if(i>0 && (v[i-1]%v[i] != 0)) flag =1;
 }
 debug(flag);
 ll ans = 1;
 if(flag){
    cout << "NO" << endl;
 }
 else{
    for(int i=0;i<n-1;i++){
    int a = divisor(v[i], v[i+1]);
     ans = (ans%rem *(m-a)%rem)%rem;
    }
   cout << ans <<endl;
 }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}