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
 int m; cin>>m;
int a[2][m];
for(int i=0;i<2;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
vector<int> pre(m+1),clk(m+1),anclk(m+1);
clk[m]=max(a[0][m-1]+1,a[1][m-1]);
anclk[m]=max(a[1][m-1]+1,a[0][m-1]);
int j=3;
for(int i=m-1;i>0;i--){
    clk[i]=max({a[0][i-1]+j,a[1][i-1],clk[i+1]+1});
    anclk[i]=max({a[1][i-1]+j,a[0][i-1],anclk[i+1]+1});
}
for(int i=0;i<m;i++){
    
}
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}