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
//  cin>>t;
 while(t--){

 ll m,n; cin>>m>>n;
 vector<ll> v(n);
 for(int i=0;i<n;i++) cin>>v[i];

 sort(v.begin(),v.end());
 debug(v);

 int ind=-1;
 for(int i=0;i<n;i++){
    if(v[i]>0){
        ind = i;
        break;
    }
 }

 debug(ind);
 
 if(ind == -1 || ind == 0 ){
    if(v[0]<0)
    cout<<v[n-m]<<endl;
    else 
    cout<<v[m-1]<<endl;
 }
 else{
    ll ans=INT_MAX;
   
        int r=m,l=0;
        while(r>0 and l<m){
            ans=min({ans,((ind-r>=0)?2*abs(v[ind-r]):INT_MAX)+((ind+l-1<n)?v[ind+l-1]:INT_MAX),((ind-r>=0)?abs(v[ind-r]):INT_MAX)+((ind+l-1<n)?2*v[ind+l-1]:INT_MAX)});
            r--;
            l++;
            debug(ans);
        }
   
    cout<<ans<<endl;
 }
 
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}