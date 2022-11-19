
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
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 int n; cin>>n;
 cerr<<n<<" ";
 if(n==1) cout<<1<<endl;
 else if(n==3) cout<<3<<" "<<1<<" "<<2<<endl;
 else if(n%2==0) {
    for(int i=1;i<=n;i+=2) cout<<i+1<<" "<<i<<" ";
    cout<<endl;
    
 }
 else{
        for(int i=1;i<=n-3;i+=2) cout<<i+1<<" "<<i<<" ";
        cout<<n<<" "<<n-2<<" "<<n-1<<endl;
    }
    }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}