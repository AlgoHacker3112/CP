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
//  cin>>t;
 while(t--){
 int n; cin>>n;
vector<vector<int> > details(n,vector<int>(3));
for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        cin>>v[i][j];
    }
}
int s=0; //starting date
int e=0; // ending date
vector<int> dp(n+1);
dp[0]=0;
for(int i=0;i<n;i++){
    int op1=dp[i-1];
    int op2=dp[i-1]+(v[i][0]>e)?v[i][2]:0;
    dp[i+1]=max()
}
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}