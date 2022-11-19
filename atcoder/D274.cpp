/**
*     author:  AlgoHacker3112
*    created: 2022-10-29 17:34:43
**/ 

#include <bits/stdc++.h>

using namespace std;

 #ifdef DEBUG
#include <bits/debug.h> // replace with your path
#else
#define debug(x)
#endif
int x,y;
bool can(vector<int> &v ,int k){
    map <int,bool> dp;
    dp[k] = true;
    int n = v.size();
    for(auto b : v){
             vector <int> temp;
             for(auto x:dp){
                temp.push_back(x.first);
             }
             for(auto x : temp){
                dp[x - b] = true;
                dp[x + b] = true;
                dp.erase(x);
             }
    }
    if(k == 0 && dp[y]) return 1;
    else if(dp[x] && k) return 1;
    return 0;
}

int32_t main(){

ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
//  cin>>t;
 while(t--){
 int n; cin >> n >> x >> y;
 int tx ;
 vector <int> vx,vy;
 for(int i=0;i<n;i++){
    int temp; cin >> temp;
    if(i%2 == 1) vy.push_back(temp);
    else{
        if(i != 0) vx.push_back(temp);
        else tx = temp;
    }
 }
 bool canx = can(vx , tx);
 bool cany = can(vy , 0);

 if(canx && cany) cout << "Yes" << endl;
 else cout << "No " << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}