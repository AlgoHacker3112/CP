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
 int a[m];
 for(int i=0;i<m;i++){
    cin>>a[i];
 }
 sort(a,a+m);
  int diff[m];
 diff[m-1]=n-a[m-1]+a[0]-1;

//  cerr<<diff[m-1]<<endl;
 for(int i=0;i<m-1;i++){
  diff[i]=a[i+1]-a[i]-1;
 }
 sort(diff,diff+m);
 reverse(diff,diff+m);
 int count=0;

 for(int i=0;i<m;i++){
    diff[i]-=4*i;

    if(diff[i]>=3) count=count+diff[i]-1;
    else if(diff[i]>0) count++;
    
 }
  cout<<n-count<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}