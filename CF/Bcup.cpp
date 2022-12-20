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

int count(int x){
    if( x==0) return 0;
    int k = sqrt(x);{
        return (k-1)*3 + (x/k - k)+ 1;
    }
}
int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 int n,m; cin >> n >> m;
 cout<< count(m) - count(--n) << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}