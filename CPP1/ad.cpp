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

int n; ll w[20];

ll solve(int i,ll s1,ll s2){
    if(i==n) return abs(s1-s2);
    return min(solve(i+1,s1+w[i],s2),solve(i+1,s1,s2+w[i]));
}
int32_t main(){
// setIO("");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 

//  cin>>t;
 while(t--){
  cin>>n;
 for(int i=0;i<n;i++) cin>>w[i];
 cout<<solve(0,0,0)<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}