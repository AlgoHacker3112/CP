/**
*     author:  AlgoHacker3112
*    created: 2022-12-12 20:31:34
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
 vector<vector<char >> v(2,vector<char>(n));
 vector<vector<bool> > vis(2,vector<bool > (n));
 for(int i=0;i<n;i++) cin >> v[0][i];
 for(int i=0;i<n;i++) cin >> v[1][i];
 int j = 0;
 int i = 0;
 if(v[0][j] == 'B') i=0;
 else i=1;
 bool flag = 0;
 while(v[i][j] == 'B'){
    vis[i][j] = 1;
    if(!vis[1-i][j] && v[1-i][j] == 'B'){
        i=1-i;
    }
    else{
        j = j+1;
    }
    if(j == n){
        flag =1 ;
        break;
    }
 }
 bool flag1 = 0;
 i=1; 
 j= 0;
vector<vector<bool>> vi(2,vector<bool>(n));
 if(v[0][0] == 'B' && v[1][0] == 'B'){
    while(v[i][j] == 'B'){
    vi[i][j] = 1;
    if(!vi[1-i][j] && v[1-i][j] == 'B'){
        i=1-i;
    }
    else{
        j = j+1;
    }
    if(j == n){
        flag1 = 1;
        break;
    }
 }
 }

 if(flag || flag1) cout << "YES"<< endl;
 else cout << "NO" << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}