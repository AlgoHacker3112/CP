/**
*     author:  AlgoHacker3112
*    created: 2022-11-09 23:56:43
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
#define ll long long

const ll Max = 1e18;

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

 int tt=1;
 cin>>tt;
 while(tt--){
 int n,k; cin >> n >> k;
 vector<ll> a(k),t(k);
 for(int i=0;i<k;i++){
    cin >> a[i];
 }

 for(int i=0;i<k;i++) cin >> t[i];
 map <ll,ll> m;
 vector<ll> v1(n,Max),v2(n,Max);
 for(int i=0;i<k;i++){
    v1[a[i]-1] = t[i];
    v2[a[i]-1] = t[i];
 }
 for(int i=1;i<n;i++){
  v1[i] = min(v1[i],v1[i-1]+1);
  v2[n -1 -i] = min(v2[n-1-i],v2[n-i]+1);
 }
 for(int i=0;i<n ;i++){
    cout << min(v1[i],v2[i]) << " ";
 }
 cout << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}