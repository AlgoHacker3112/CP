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
 int k=n-1;
 for(int i=0;i<n;i++) a[i]=i+1;
  cout<<n<<endl;
 for(int i=1;i<=n;i++){
    
    if(i!=1) swap(a[k-1],a[k]),k--;
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;
 }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}