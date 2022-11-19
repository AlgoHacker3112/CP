/**
*     author:  AlgoHacker3112
*       
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
 vector <int> v(n);
 vector <bool> vis(n);
 for(int i=0;i<n;i++)
 {
   cin >> v[i];
 }
 int cur_or = 0;
 for(int i=0;i<min(n,31);i++){
    int mx = 0;
    int idx = -1;
    for(int j = 0; j < n; j++){
        if(vis[j]) continue;
        if((cur_or | v[j]) > mx){
            mx = (cur_or | v[j]);
            idx = j;
        }
    }
    vis[idx] = 1;
    cur_or = mx;
    // debug(cur_or);
    cout << v[idx] << " ";
 }
 for(int i=0 ; i<n; i++) if(!vis[i]) cout << v[i] << " ";
 cout << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}