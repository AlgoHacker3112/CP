/**
*     author:  AlgoHacker3112
*    created: 2022-11-02 14:12:11
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

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b,a%b);
}
int divCount(ll n){
    int count = 0;
    int k = sqrt(n);
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
//  cin>>t;
 while(t--){
 int n; cin >> n;
 vector <ll> v(n);
 for(int i=0;i<n;i++){
    cin >> v[i];
 }
 cerr<< gcd(17,51);
 ll ans = v[0];
 for(int i=1;i<n;i++){
    ans = gcd(ans, v[i]);
 }
 cout << divCount(ans)<< endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}