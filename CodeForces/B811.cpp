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
 int a[n];
int ans=0;
 for(int i=0;i<n;i++) cin>>a[i];
 map<int,int>m;
 map<int,int>ind;
 for(int i=0;i<n;i++){
    m[a[i]]++;
    if(m[a[i]]>1) ans=max(ans,ind[a[i]]+1);
    ind[a[i]]=i;
 }
 cout<<ans<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}