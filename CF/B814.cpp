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
 int n,k; cin>>n>>k;
 bool flag=0;
 if(k%4==2) flag=1;
 if(k%2) flag=1;
 if(flag){
    cout<<"YES"<<endl;
    if(k%2){
        for(int i=1;i<=n;i+=2) cout<<i<<" "<<i+1<<endl;
    }
    else{
        int i;
        for( i=1;i<=n;i+=4){
            cout<<i+1<<" "<<i<<endl;
           if(i+2<n) cout<<i+2<<" "<<i+3<<endl;
        }
        // if(i==n+2) cout<<i-3<<" "<<i-2<<endl;
    }
 }
 else cout<<"NO"<<endl;


 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}