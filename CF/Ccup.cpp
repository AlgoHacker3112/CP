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
 int n; cin >> n;
vector <int> v(6);
for(auto & c : v) cin >> c;
int x,y;  cin >> x >> y;
int cx = (v[0]==v[2]) ? v[0] : v[4];
int cy = (v[1]==v[3]) ? v[1] : v[5];

if((cx == 1 || cx == n) and (cy == 1 || cy == n)){
    debug(cy);
    if(cx == x || cy == y) cout << "Yes" <<endl;
    else cout << "No" << endl;
}
else{
    debug(cx);
    if(cx % 2 == x % 2 || cy % 2 == y % 2) cout << "Yes" << endl;
    else cout << "No" << endl;
}


 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}