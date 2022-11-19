#include <bits/stdc++.h>
#warning change ll
#define ll long long
#define ld long double

using namespace std;

 #ifdef DEBUG
#include <bits/debug.h> // replace with your path
#else
#define debug(x)
#endif
vector<bool> vis(100001);

int nodes = 0;

void dfs (int node , vector<int> adj[]){
    vis[node] = 1;
    nodes++;
    for(auto child : adj[node])
    {
        if(!vis[child]) dfs(child , adj);
    }
}


int32_t main(){
//setIO("");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
//  cin>>t;
 while(t--){
 int n,m; cin>>n>>m;
 vector<int> adj[n+1],tadj[n+1];
 for(int i = 0; i < m; i++ ){

    int a,b ;
    cin >> a >> b;
    adj[a].push_back(b);
    tadj[b].push_back(a);
 }
  bool f1 = 0, f2 = 0;
    dfs(1, adj);
    if(nodes == n) f1 = 1;
    fill(begin(vis), end(vis), 0);
    nodes = 0;
    dfs (1, tadj);
    if(nodes == n) f2 = 1;
    if(f1 and f2 ) cout<<"YES"<<endl;
    else{
        nodes = 0;
        fill(begin(vis), end(vis), 0);
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
           if(!vis[i+1]) v.push_back(i+1);
           dfs(i+1, adj);
        }
        bool flag = 0;
        cout << "NO" << endl;
        if(v.size() > 1){ 
            flag = 1;
            cout << v[0] <<" "<< v[1] << endl;
        }
        if(v.size() < 2){
            nodes = 0;
            fill(begin(vis),end(vis),0);
            
            for(int i = 0; i < n; i++){
              if(!vis[i+1]) v.push_back(i+1);
              dfs(i+1, tadj);
            }
        }
        if(!flag) cout << v[2] << " " << v[1] <<endl;
       
    }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}