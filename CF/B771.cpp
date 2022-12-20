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
 vector<int> a(n);
 for(int i=0;i<n;i++) cin>>a[i];

 vector<int>even,odd;
 for(int i=0;i<n;i++){
    if(a[i]%2) odd.push_back(a[i]);
    else even.push_back(a[i]);
 }
 vector<int>teven=even;
 vector<int>todd=odd;
 sort(even.begin(),even.end());
 sort(odd.begin(),odd.end());
 if(teven==even and todd==odd) cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}