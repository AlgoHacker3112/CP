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

 void setIO(string s) {
 freopen((s + ".in").c_str(), "r", stdin);
 freopen((s + ".out").c_str(), "w", stdout);
 }


int node =0;
vector<bool> vis(201,false);

void dfs(int n, vector<int> adj[]){
    vis[n] = 1;
    node++;
    for(auto it : adj[n]){
        if(!vis[it]) dfs(it, adj);
    }
}

int32_t main(){
setIO("moocast");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
//  cin>>t;
 while(t--){
 int n;
 cin>>n;
 vector<vector<int> > v(n,vector<int>(3));

 for(int i = 0; i < n; i++)
 {  
    cin >> v[i][0] >> v[i][1] >> v[i][2]; 
 }
   vector<int> adj[n+1];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int d = (v[i][0]-v[j][0])*(v[i][0]-v[j][0])+(v[i][1]-v[j][1])*(v[i][1]-v[j][1]);
        if(d <= v[i][2]*v[i][2] and i!=j) adj[i+1].push_back(j+1);
       
    }
   }
   int ans=0;
   for(int i=0 ; i < n; i++){
    node=0;
    if( !vis[i+1] ){
      dfs(i+1,adj);
     
    }  
    fill(begin(vis),end(vis),false);
     ans = max(ans, node);
   }
   cout<<ans<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}