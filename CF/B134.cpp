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
 int n,m,sx,sy,d; cin>>n>>m>>sx>>sy>>d;
 if((sx-d)<=1 and (sx+d)>=n || (sy-d)<=1 and (sy+d)>=m || (sx-d)<=1 and (sy-d)<=1 || (sx+d)>=n and (sy+d)>=m)
 cout<<-1<<endl;
 else cout<<m+n-2<<endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}