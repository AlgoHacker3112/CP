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

ll gcd(ll a,ll b){
    if(b==1) return 1;
    return gcd(b,a%b);
}
int32_t main(){
//setIO("");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 ll a,b,c,d; cin>>a>>b>>c>>d;
 if(a*d && b*c){
    if(a*d==b*c){
        cout<<0<<endl;
    }
    else{
        if(gcd(a*d,b*c)==min(a*d,b*c)){
            cout<<1<<endl;
        }
        else cout<<2<<endl;
    }
 }
 else{
    if(a*d==b*c) cout<<0<<endl;
    else cout<<1<<endl;
 }

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}