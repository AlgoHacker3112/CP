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
 int n; cin>>n;
 int a[n];
 vector<int> pre(n+1);
 for(int i=0;i<n;i++){
    cin>>a[i];
    pre[i+1]=pre[i]+a[i];
 }
 int minTime=0;
 for(int i=1;i<n+1;i++){
  minTime=max(minTime,(pre[i]+i-1)/i);
 }
 int q; cin>>q;
 while(q--){
    int x; cin>>x;
    if(x<minTime) cout<<-1<<endl;
    else cout<<(pre[n]+x-1)/x<<endl;
 }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}