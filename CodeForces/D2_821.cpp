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


int32_t main(){
//setIO("");
ios_base::sync_with_stdio(false);
// freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 int n ,x ,y; cin>>n>>x>>y;
 string s1,s2; cin >> s1 >> s2;
 vector<int> b;
 for(int i=0; i<n; i++){
    if(s1[i] != s2[i]) b.push_back(i);
 }
 vector <int> dis;
 int sz = b.size();
 for(int i=0; i<sz-1 ;i++) dis.push_back(b[i+1] - b[i]);

 if(b.size()%2){
  cout<< -1 << endl;
  continue;
 }
//  if(b.size() == 0){
//     cout << 0 << endl;
//     continue;
//  }
 if(x >= y){
 if(b.size() == 2 and b[1] - b[0] == 1){
    cout << min(x, 2*y) << endl;
    continue;
 }
  cout << y*b.size()/2 << endl;
  continue;

 }
 int k = b.size();
 vector <int> dp(k+1);
 for(int i=1; i<=k; i++){
    dp[i] = dp[i-1];
    if(i >= 2){
        int dist = b[i-1] - b[i-2];
        int save = y - x*dist;
        dp[i] = max(dp[i], dp[i-2] + save);
    }
 }
  cout << y*b.size()/2 - dp[k] <<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}