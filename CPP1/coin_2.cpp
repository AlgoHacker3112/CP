#include <bits/stdc++.h>
#warning change ll
#define ll long long
#define ld long double
const int MOD=1e9+7;
using namespace std;

#ifdef DEBUG
    #include <bits/debug.h> // replace with your path
#else
    #define debug(x)
#endif


const int MAX=1e6+1;
int n,x;
vector<int>coins;
 

int32_t main()
{
	  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1; 
    //cin>>t;
    while(t--){
	  cin>>n>>x;
		coins.resize(n);
        vector<int> dp(MAX,0);
        dp[0]=1;
		for(int i=0;i<n;i++) cin>>coins[i];
		 

         for(int i=0;i<n;i++){
            for(int j=1;j<=x;j++){
                if(coins[i]<=j)
                dp[j]=(dp[j]+dp[j-coins[i]])%MOD;
            }
         }
         cout<<dp[x]<<endl;
    }
}
 
 