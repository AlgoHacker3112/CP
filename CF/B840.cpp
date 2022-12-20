/**
*     author:  AlgoHacker3112
*    created: 2022-12-19 20:22:19
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
 int n,k; cin >> n >> k;
 vector<int> a(n);
 int mx = INT_MIN;
for(int i=0;i<n;i++){
    int temp;
    cin >> temp;
    a[i] = temp;
    mx = max(mx , temp);
}
 vector<pair<int,int>> p(n);
 for(int i=0;i<n;i++){
     int temp;
    cin >> temp;
    p[i] = {temp,i};
 }

 sort(all(p));
 debug(p);
 int i = 0;
 int temp = 0;
 bool flag = 0;
 while(mx > 0 && k > 0){
    debug(mx);
    mx = mx - k;
    temp += k;
    debug(temp);
    while(temp >= a[p[i].second]){
     if(i == n-1){
        i++;
        break;
     }
     i++;
    }
    if(i == n){
     flag = 1;
     break;
    }
    k = k - p[i].first; 
 }
 debug(flag);
  if(flag || mx <= 0) cout << "YES" <<endl;
  else cout << "NO" << endl;
}
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}