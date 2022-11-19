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
 int a,b,c; 
 cin >> a >> b >> c;
 if( (a-1) < ((b < c) ? (2*c - b - 1): (b - 1)) ) cout << 1 << endl;
 else if ((a-1) > ((b < c) ? 2*c - b - 1: b -1)) cout << 2 << endl;
 else cout << 3 << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}