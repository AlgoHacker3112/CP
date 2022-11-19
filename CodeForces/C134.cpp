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
 vector<int> a(n),b(n),dmax(n),dmin(n);
 for(int i=0;i<n;i++) cin>>a[i];
 for(int i=0;i<n;i++) cin>>b[i];
 bool flag = 0;
  for(int i=0;i<n;i++){
    if(a[i]>b[i]) flag=1;
  }
  int i=0,j=n-1;
  if(flag==0)
  for(int k=0;k<n;k++){
    while(b[i]<a[k]) i++;
     dmin[k]=b[i]-a[k];
  }

  if(!flag){
    dmax[n-1] = b[n-1]-a[n-1];
    for(int k=n-2;k>=0;k--){
        if(b[j-1]<a[k+1]) j--;
        dmax[k]=b[j]-a[k];
        
    }
  }
  for(int k=0;k<n;k++) cout<<dmin[k]<<" ";
  cout<<endl;
  for(int k=0;k<n;k++) cout<<dmax[k]<<" ";
  cout<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}