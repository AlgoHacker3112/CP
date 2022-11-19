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
 int n,m; cin>>n>>m;
 string a,b; cin>>a>>b;
 if(m>n) cout<<"NO"<<endl;
 else{
    bool flag=0;
    string c=b.substr(1,m-1);
    cerr<<c<<endl;
    int count=0;
    for(int i=0;i<n-m+1;i++) if(a[i]==b[0]) count++;
    string check=a.substr(n-m+1,m-1) ;
    if(count>0 and c==check) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

 }

 }
// cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}