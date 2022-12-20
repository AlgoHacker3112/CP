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
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 int n; cin >> n;
 vector<int> a(n),b(n);
 int cnt = 0; 
 int count = 0,diff= 0;
 for(int i=0 ;i< n;i++){
    cin >> a[i];
    if(a[i] == 1) count++;
 } 
 for(int i=0 ;i< n;i++){
  cin >> b[i];
  if(b[i] == 1) cnt++;
  if(a[i] != b[i]) diff++;
 }
 
 if(abs(cnt - count) == diff) cout << diff <<endl;
 else cout << abs(cnt - count) + 1 << endl;


 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}