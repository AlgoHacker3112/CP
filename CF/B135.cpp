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


int32_t main(){
//setIO("");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 int n; cin>>n;
 vector<int> p(n);
 p[n-1] = n, p[n-2] = n-1, p[n-3] = 1; p[n-4] = n-2;
 int k=0;
 for(int i=n;i>0;i--){
    if(i == n || i == n-1 || i == 1 || i == n-2) continue;
    p[k++]=i;
 }
 for(auto it : p) cout<<it<<" ";
 cout<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}