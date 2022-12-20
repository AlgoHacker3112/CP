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
 string s="";
 while(n>0){
  for(int i=9;i>0;i--){
    if(n>=i){
       s+=to_string(i);
       n-=i;
    }
    
  }
 }
 int m=s.size();
 debug(m);
 debug(s);
 int ans=0;
 for(int i=0;i<m;i++){
    ans+=(s[i]-'0')*pow(10,i);
 }
 cout<<ans<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}