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
//setIO("");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 int n,q; cin>>n>>q;
 vector<vector<int> > arr(1001,vector<int> (1001));
 for(int i=0;i<n;i++){
    int a,b; cin>>a>>b;
    arr[a][b]+=a*b;
 }
 int pre[1001][1001];
 for(int i=1;i<1001;i++){
    for(int j=1;j<1001;j++){
        pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+arr[i][j];
    }
 }
      for(int i=0;i<q;i++){
        int h1,w1,h2,w2;
        cin>>h1>>w1>>h2>>w2;
        cout<<pre[h2-1][w2-1]-pre[h2-1][w1]-pre[h1][w2-1]+pre[h1][w1]<<endl;
      }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}