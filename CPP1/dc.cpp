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
 void setIO(string s) {
 freopen((s + ".in").c_str(), "r", stdin);
 freopen((s + ".out").c_str(), "w", stdout);
 }

int32_t main(){
setIO("diamond");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
int t=1; 
//    cin>>t;
 while(t--){
 int n,k; cin>>n>>k;
 int a[n];

 for(int i=0;i<n;i++) cin>>a[i];


 int ans=0;
 for(int i=0;i<n;i++){
    int cnt=1;
    for(int j=0;j<n;j++){
        if(abs(a[j]-a[i])<=k and j!=i and a[j]>=a[i]) cnt++;
    }
    ans=max(ans,cnt);
 }
 cout<<ans<<endl;
 }
 cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}