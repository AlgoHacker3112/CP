#include <bits/stdc++.h>
#warning change ll
#define ll long long
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
 vector<int> a(n),b(n);
 for(int i=0 ;i< n;i++){
    cin >> a[i];
 }
 for(int i = 0; i < n;i++) cin >> b[i];
 vector<int> z,o;
 ll sumz = 0, sumo = 0;
 for(int i=0 ;i<n;i++){
    if(a[i]) o.push_back(b[i]),sumo+=b[i];
    else z.push_back(b[i]),sumz+=b[i];
 }
 sort(begin(o),end(o));
 sort(begin(z),end(z));
 ll ans = 2*(sumo+sumz);
 if(o.size()<z.size()){
     
     for(int i=0;i<(z.size()-o.size());i++) ans-=z[i];
 }
 else if(o.size()>z.size()){
    
    for(int i=0 ;i<(o.size()-z.size());i++) ans-=o[i];

 }
 else if(o.size() == z.size()){
    ll k = min(o[0],z[0]);
    ans -= k;
 }
 debug(o);
 debug(z);
 
 cout << ans << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}