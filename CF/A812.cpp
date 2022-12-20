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
 int x1=0,x2=0,y1=0,y2=0;
 for(int i=0;i<n;i++){
    int a,b; cin>>a>>b;
    if(a==0){
        if(b>=0){
            y1=max(y1,b);
        }
        else{
            y2=min(y2,b);
        }
    }
    else{
        if(a>=0){
            x1=max(x1,a);
        }
        else{
            x2=min(x2,a);
        }
    }

 }
 cout<<abs(2*(x2+y2))+2*(x1+y1)<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}