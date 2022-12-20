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
    vector < int> v(3);
 for(int i = 0 ;i < 3;i++) cin>> v[i];
 sort(begin(v),end(v));
 if(v[0]+v[1] == v[2]) cout << "Yes" << endl;
 else cout << "No" << endl;


 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}