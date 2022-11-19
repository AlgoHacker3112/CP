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
 int count1=0,count2=0;
 int a[n][m];
 vector<string> s(n);
 for(int i=0;i<n;i++){
    cin>> s[i];
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      a[i][j] = s[i][j] - '0';
      if(a[i][j]==1) count1++;
      else count2++;
    }
 }
 cerr<<a[1][1]<<endl;
 bool flag=0;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i][j]==0){
            if(i+1<n){
                if(a[i+1][j]==0) flag=1;
            }
            if(j+1<m){
                if(a[i][j+1]==0) flag=1;
            }
            if(i+1<n and j+1<m and a[i+1][j+1]==0) flag=1;
            if(i+1<n and j-1>=0 and a[i+1][j-1]==0) flag=1;
        }
    }
 }
  debug(flag);
  debug(count1);
  debug(count2);
//  debug(a);

 if(flag==1) cout<<count1<<endl;
 else if(count2==0) cout<<count1-2<<endl;
 else cout<<count1-1<<endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}