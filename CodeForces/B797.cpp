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
 vector<int> a(n),b(n);
 for(int i=0;i<n;i++) cin>>a[i];
 for(int i=0;i<n;i++) cin>>b[i];
 vector<pair<int,int>> diff;
 bool flag=0;
 int max_=0;
 
for(int i=0;i<n;i++){
diff.emplace_back(a[i]-b[i],b[i]);
if(a[i]-b[i]<0) flag=1;
max_=max(max_,a[i]-b[i]);
} 
if(flag==1) cout<<"NO"<<endl;
else{
 for(int i=0;i<n;i++){
    if(diff[i].first<max_ and diff[i].second!=0) flag=1;
 }
 if(!flag) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
}
}
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}