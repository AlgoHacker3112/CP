/**
*     author:  AlgoHacker3112
*    created: 2022-11-04 20:03:50
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
#define ll long long
#define pb(a) push_back(a)

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
 vector <int> v(n);
 ll sum1 = 0, sum2 = 0;
 for(int i=0;i<n;i++){
    cin >> v[i];
    if(v[i] >= 0) sum1 += v[i];
    else sum2 += v[i];
 }
 cout <<abs(sum1 + sum2) << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}