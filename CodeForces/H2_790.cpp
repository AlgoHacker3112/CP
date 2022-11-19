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
 int n; cin>>n;
 vector <int> v(n+1);
 for(int i=1; i<n+1; i++)
 {
   cin >> v[i];
 }
 map <int, int> m;
 int ans = 0;
 for(int i=1 ;i< n+1; i++){
    int k = v[i];
    ans-=m[i];
    for(int j = 0 ;j<n+1; j++){
        if( v[j]<=k and j>i ) ans++,m[j]++;
        if( v[j]>=k and j<i ) ans++,m[j]++;
    }
 }
   cout << ans <<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}