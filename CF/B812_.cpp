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
 int max_=0;
 for(int i=0;i<n;i++){
    cin>>a[i];
    max_=max(max_,a[i]);
 }
 bool f=0;
 bool flag=0;
 for(int i=0;i<n-1;i++){
    if(a[i]<max_ and f==0){
       if(a[i]>a[i+1]){
          flag=1;
          break;
       } 
    
    }
    if(a[i]==max_) f=1;
    if(a[i]<max_ and f==1){
        if(a[i+1]>a[i]){
         flag=1;
        break;
        }
    }
 
 }
 if(flag) cout<<"NO"<<endl;
 else cout<<"YES"<<endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}