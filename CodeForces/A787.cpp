#include <bits/stdc++.h>
#warning change ll
#define int long long
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
 int a,b,c,x,y; cin>>a>>b>>c>>x>>y;
 if(x-a<0) x=a;
 if(y-b<0) y=b;
 if(c>=x+y-a-b and c!=0 or c==0 and a>=x and b>=y) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}