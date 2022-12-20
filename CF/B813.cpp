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
 for(int i=0;i<n;i++){
    p[i]=i+1;
 }
 if(n%2){
    for(int i=n-1;i>0;i-=2){
        swap(p[i],p[i-1]);
    }
 }
 else{
    for(int i=0;i<n;i+=2){
        swap(p[i],p[i+1]);
    }
 }
 for(auto v: p){
    cout<<v<<" ";
 }
 cout<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}