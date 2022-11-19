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
// setio("");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
     cin.tie(nullptr);
    cout.tie(nullptr);
 int t=1; 
 cin>>t;
 while(t--){
 int n,m,k; cin>>n>>m>>k;
 int a[k];

 for(int i=0;i<k;i++){ 
    cin>>a[i];
    
  }
  sort(a,a+k);

 
  
   bool flag=0,flagO=0;
   int i=0,j=0;
   int odd=0;
   while(j<k){
    if(a[j]/2>=m){
       odd =a[j]/m;
       i+=odd;
       if(odd>=3) flagO=1;
    }
    j++; 
   }
   if(n%2==1 and flagO and i>=n) flag=1;
    if(n%2==0 and i>=n) flag=1;

   flagO=0;
   j=0;
   i=0;
   while(j<k){
    if(a[j]/2>=n){
        odd=a[j]/n;
        i+=odd;
        if(odd>=3) flagO=1;
    }
     j++;
   }
   if(i>=m and m%2==1 and flagO) flag=1;
   if(i>=m and m%2==0) flag=1;


   if(flag) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
  
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}