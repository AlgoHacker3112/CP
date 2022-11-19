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

 void setIO(string s) {
 freopen((s + ".in").c_str(), "r", stdin);
 freopen((s + ".out").c_str(), "w", stdout);
 }

// vector<bool> vis(100001);
struct cow {
    int x ;
    int y ;
    vector<int> adj;
    bool visited;
};
   int xmax = 0,xmin = INT_MAX;
   int ymax = 0,ymin = INT_MAX;
int dfs(int node, vector<cow> &cows){
   cows[node].visited = true;

   xmax = max(xmax,cows[node].x);
   xmin = min(xmin,cows[node].x);
   ymax = max(ymax,cows[node].y);
   ymin = min(ymin,cows[node].y);


   for(auto next : cows[node].adj){
    if(!cows[next].visited) dfs(next , cows);
   }
   
   return 2*((ymax - ymin)+ (xmax - xmin));
}

int32_t main(){
setIO("fenceplan");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
//  cin>>t;
 while(t--){
 int n,m; cin>>n>>m;
 vector <cow> cows(n+1);
 for(int i=1;i<=n;i++){
    cin>> cows[i].x >> cows[i].y ;
    cows[i].visited = false;
 } 
//  debug(cows);
 vector<int> adj[n+1];
 for(int i=0;i<m;i++){
    int a,b; cin>>a>>b;
    cows[a].adj.push_back(b);
    cows[b].adj.push_back(a);
 }
 int ans=INT_MAX;
  for(int i=1;i<=n;i++){
    if(!cows[i].visited){
        xmax = 0; 
        ymax = 0;
        xmin = INT_MAX;
        ymin = INT_MAX;
       ans = min(ans , dfs(i, cows));
    }
  }
  cout<<ans<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}