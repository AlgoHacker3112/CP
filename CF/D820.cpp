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
 for(int i = 0; i < n; i++) cin >> a[i];
 for(int i = 0; i < n; i++) cin >> b[i];

 vector<int> diff(n);
 for(int i = 0; i < n; i++) diff[i] = b[i] - a[i];
 sort(begin(diff), end(diff));
 int i = 0, j = n-1;
 debug(diff);
 int ans = 0; 
 while(i<j){
    while((diff[j] + diff[i]) < 0 and  i < n){
        i++;
    }
    if(i<j) ans++,j--,i++;
 }
 cout<<ans<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}