#include <bits/stdc++.h>
#warning change ll
#define int long long
#define ld long double

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
for(auto & c : v) cin >> c;
int ans = INT_MAX;
vector <int> pre(n+1);

for(int i = 1; i <= n ;i++){
 pre[i] = pre[i-1] + v[i-1];
}
for(int i = 1 ; i < n+1 ; i++){
  int sum = pre[i];
  int j = i,l=i;
  int sz = i;
  int tmps = 0;
  while(j < n and tmps < sum){
     tmps += v[j];
     j++;
     if(tmps == sum) {
        tmps = 0;
        sz = max (j-l,sz);
        l = j;
     }
  }
   if(j == n and l == n) ans = min(ans, sz);
   
}
cout << ans << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}