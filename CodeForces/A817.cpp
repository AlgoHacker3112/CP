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
 string s; cin>>s;


 if(n!=5) cout<<"NO"<<endl;
 else{
    map<char,bool> check;
    for(int i=0;i<5;i++){
        check[s[i]]=1;
    }
    string c="Timur";
    bool flag=0;
    for(int i=0;i<5;i++){
      if(check[c[i]]!=1) flag=1;
    }
    if(!flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}