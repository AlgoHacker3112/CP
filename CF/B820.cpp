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
 string s,ans="" ;
 cin >> s ;
 for(int i = n-1; i >= 0; i--)
 {
   if(s[i] == '0')
   {
      int temp = 10 * (s[i-2] - '0') + (s[i-1] - '0');
      i-=2;
      ans += char('a' + temp -1);
   }
   else{
    ans += char('a' + (s[i] - '0') -1);
   }
 }
  reverse(begin(ans),end(ans));
  cout << ans << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}