/**
*     author:  AlgoHacker3112
*    created: 2022-11-13 23:30:39
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
#define ll long long

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
 vector<int> a(n);
 for(int i=0;i<n;i++) cin >> a[i];
 bool flag = 0;
 int i;
 for( i=n-1;i>0;i--){
    if(a[i] > a[i-1]) flag = 1;
    if(flag){
        if(a[i] < a[i-1]){
            break;
        }
    }
 }
 cout << i << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}