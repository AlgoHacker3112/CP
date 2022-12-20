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
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }

 int max_=a[0];
 bool f=0,f1=0;
 for(int i=1;i<n;i++){
    if(a[i]>=max_ and !f){
        max_=a[i];
      continue;  
    } 
    else{
        f=1;
    }
    if(f==1 and a[i]>=max_){
         f1=1;
         break;
    }
 }
 if(f1==1){
    cout<<"NO"<<endl;
 }
 else cout<<"YES"<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}