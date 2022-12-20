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
long long dp[1001][101];
int n,k,m;
const int mod=1e9+7;
int ans(int i,int j,long long sum){

    if(i>=n && j<k){
        return 0;
    }

    if(j==k ){
        if(sum%m==0){
            return 1;
        } else {
            return 0;t
        }
    }
    if(dp[i][j]!=-1) return dp[i][j];
    // we can take the elemnt is 1 or zero
    dp[i][j]=(ans(i+1,j+1,sum+i)+ans(i+1,j,sum))%mod;
    dp[i][j]%=mod;
    return dp[i][j];

}

int32_t main(){
//setIO("");
    ios_base::sync_with_stdio(false);
    freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>> n>> k>> m;
    memset(dp,-1,sizeof(dp));
    cout<< ans(0,0,0)<<endl;
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}