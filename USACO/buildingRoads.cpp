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
 vector<bool> visited;
void dfs(int node,vector<int> adj[]){

 visited[node]=true;

for(auto next: adj[node]){
    if(!visited[next]){
        // visited[e]=true;
        dfs(next,adj);
    }
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
 visited.resize(n+1,false);
//  vector<vector<int> > adj(n+1);
 vector<int> adj[n+1];
 for(int i=0;i<m;i++){
    int a,b; cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
 }
 int count=-1;
 vector<int> ans;
 ans.push_back(1);
 for(int i=1;i<n+1;i++){
    if(!visited[i]){
        if(i!=1){
            ans.push_back(i);
            ans.push_back(i);
        }
        count++;
        dfs(i,adj);
    }
 }
 cout<<count<<endl;
 for(int i=0;i<ans.size()-1;i+=2){
 cout<<ans[i]<<" "<<ans[i+1]<<endl;
 }
//  cout<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}