
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
 vector<int> a(n),b(n);
 for(int i=0;i<n;i++) cin>>a[i];
 for(int i=0;i<n;i++) cin>>b[i];
 bool flag=0,flag2=0;

 for(int i=0;i<n;i++){
    if(a[i]!=b[i]) flag=1;
 }
 for(int i=0;i<n-1;i++){
    if(abs(b[i+1]-b[i])>1) flag2=1;
 }
 if(flag and flag2==0 || flag==0 ) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}          