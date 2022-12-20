/**
*     author:  AlgoHacker3112
*    created: 2022-11-04 00:51:35
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
bool inrange(int x,int y, int d, int n){
    if(x-d >= 0 && y-d >= n && x+d < n && y+d < n) return true;
    return false;
}

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
//  cin>>t;
 while(t--){
 int n,m; cin >> n >> m;
 int index = -1;
 bool flag = 0;
 vector<vector<int>> v(n,vector<int> (n));
 for(int k=0;k<m;k++){
    int x,y;
    cin >> x >> y;
    x--,y--;
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(x+i >= 0 && x+i < n && y+j >= 0 && y+j < n){
                v[x+i][y+j] += 1;
                if(!flag && v[x+i][y+j] == 9) flag = 1, index = k+1;
            }
        }
    }
      debug(v);
 }
 cout << index << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}