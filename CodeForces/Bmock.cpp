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
//setIO("");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
//  cin>>t;
 while(t--){
 int n,k; cin>>n>>k;
 vector<int> v(n);
 for(int i=0;i<n;i++) cin>>v[i];
 sort(begin(v),end(v));
 int ans=INT_MAX;


 for(int i=0;i<n-k-1;i++){
    ans=min(ans,v[i+k-1]-v[i]);
 }
 cout<<ans<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}