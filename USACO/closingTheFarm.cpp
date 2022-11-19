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

vector<bool> visited(3001,false),closed(3001,false);
int node=0;

 void setIO(string s) {
 freopen((s + ".in").c_str(), "r", stdin);
 freopen((s + ".out").c_str(), "w", stdout);
 }


 void dfs(int n, vector<int> A[]){
    debug(closed[n]);
    if(closed[n] || visited[n]) return ;

     visited[n]=1;
     node++;
     for(auto it : A[n]){
        if(!visited[it]) dfs(it , A);
     }
 }

int32_t main(){
setIO("closing");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
//  cin>>t;
 while(t--){
 int n,m; cin>>n>>m;
 vector<int> adj[n+1];
 for(int i = 0; i < m; i++){
    int a,b; cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
 }
   debug(adj[1]);

   vector<int> order(n);
   for(int i=0;i<n;i++) cin>>order[i];

    node=0;
    dfs(1, adj);
 
   if(node==n) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

   for(int i=0;i<n-1;i++){
       fill(visited.begin(),visited.end(),false);
       node=0;
       closed[order[i]]=1;
       dfs(order[n-1],adj);
       debug(node);
       if(node==n-1-i){
        cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
   }
   
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}