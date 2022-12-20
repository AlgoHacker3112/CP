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
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 int n,m; cin >> n >> m;
 if((m > 3 and n > 1) || (m > 1 and n > 3 )) cout << "1 2" << endl;
 else{
    if(m == 1 || n == 1) cout << "1 1" << endl;
    else cout << "2 2" << endl;
 }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}
