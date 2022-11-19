/**
*     author:  AlgoHacker3112
*    created: 2022-10-30 10:48:27
**/ 

#include <bits/stdc++.h>

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
 
 vector<int> v;
 for(int i=0;i<n;i++){
   int temp; cin>>temp;
    v.push_back(temp);
   
 } 
 sort(begin(v),end(v));
 debug(v);
 int mx = INT_MIN;
 int mx2 = INT_MIN;
 for(int i=1;i<n-1;i++){
    
    mx = max(mx , abs(v[n-1] - v[i-1]) + abs(v[i] - v[i-1]));
    mx2 = max(mx2 , abs(v[i+1] - v[0]) + abs(v[i+1] - v[i] ));
 }
 
    debug(mx);
    debug(mx2);
    cout << max(mx ,mx2) <<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}