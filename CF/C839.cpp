/**
*     author:  AlgoHacker3112
*    created: 2022-12-18 20:37:31
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
 int k,n; cin >> k >> n;
 vector <int> a(k);
 int count = 1;
  a[0] = 1;
 for(int i=1;i<k;i++){
    if(a[i-1] + count <= n){
        if(k - i - 1 <= (n - a[i-1] - count)){
           a[i] = a[i-1] + count;
           count++;
        }
        else{
            a[i] = a[i-1] + 1;
        }
    }
    else a[i] = a[i-1] +1 ;

 }
   for(auto c : a) cout << c << " ";
   cout << endl; 

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}