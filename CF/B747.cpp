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
 cin>>t;
 while(t--){
 int n; cin>>n;
 vector<int>a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 sort(a.begin(),a.end());

 vector<ll>pre(n),suf(n);

 pre[0]=a[0];
 for(int i=1;i<n;i++) pre[i]=pre[i-1]+a[i];
 
 suf[n-1]=a[n-1];
 for(int i=n-2;i>=0;i--) suf[i]=suf[i+1]+a[i];
 int i;
 for( i=1;i<(n+1)/2;i++){
    if(pre[i]<suf[n-i]){
        cout<<"YES"<<endl;
        break;
    }
 }
 debug(a);
 debug(pre);
 debug(suf);
 if(i==(n+1)/2) cout<<"NO"<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}