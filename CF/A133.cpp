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
 int ans=0;
 if(n==1) ans=2;
 else if(n==2) ans=1;
 else{
    if(n%3) ans=n/3+1;
    else ans=n/3;
 };
 
 cout<<ans<<endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}