/**
*     author:  AlgoHacker3112
*    created: 2022-10-20 20:11:20
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
 int n,m; cin >> n >> m;
 map<int , bool > row;
 map <int, bool > col;
 for(int i=0;i<m;i++){
    int a,b; cin >> a >> b;
    row[a] = 1;
    col[b] = 1;
 }
 bool flag =0;
 for(int i =1;i<=n;i++){
    if(row[i] == 0 || col[i] == 0){
        flag = 1;
        break;
    }
 }
 if(flag ) cout <<"YES " << endl;
 else cout << "NO" << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}