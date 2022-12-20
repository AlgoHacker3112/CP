/**
*     author:  AlgoHacker3112
*    created: 2022-10-15 20:53:57
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
 int mx = INT_MIN;
 vector <int> v(n),pre(n);
 for(int i=0;i<n;i++){
    cin >> v[i];
    mx = max(mx,v[i]);
    pre[i] = mx;
 } 
 vector <bool> vis(n+1);
 vector <int> ans(n);
 int j = 0;
 for(int i=n-1;i>=0;i--){
     if(pre[i] - v[i] > 0){
        if(!vis[pre[i] - v[i]]) ans[i] = pre[i] - v[i];
        else{
            j = v[i] + 1;
            vis[j] = 1;
            ans[i] = j;
        }
        vis[pre[i] - v[i]] = 1;
     }
 }
 vector <int> rem;
 for(int i=0;i<n;i++) if(!vis[i+1]) rem.push_back(i+1);
 int k =0;
 map <int,int> m;
 for(int i = 0;i<n;i++){
    if(ans[i] == 0){
        ans[i] = rem[k++]; 
    }
 }
 for(int i=0;i<n;i++){
    m[ans[i]] = i+1;
 }
 fill(begin(ans),end(ans),0);
 for(int i=0;i<n;i++){
    ans[i] = m[i+1];
 }
 for(auto c : ans) cout << c << " ";
 cout<< endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}