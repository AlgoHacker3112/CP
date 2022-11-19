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
 bool flag=0;
 string s1;
 string s2;

 cin>>s1>>s2;
 for(int i=0;i<n;i++){
  
    if(s1[i]=='R' and s2[i]!='R') flag=1;
     if((s1[i]=='B' || s1[i]=='G') and s2[i]=='R') flag=1;
 }
 if(!flag) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
//  debug(v);
debug(s1);
debug(s2);
debug(flag);
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}