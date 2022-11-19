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
vector <int> d(n);
for(auto & c : d) cin >> c;
vector <int> ans(n);
ans[0] = d[0];
bool flag =0 ;
for(int i=1 ; i<n ;i++){
  if(ans[i-1] >= d[i] and d[i]!= 0){
  flag = 1;
  break;
  } 
  else{
   ans[i] = ans[i-1] + d[i];
  }
  
}
if(flag == 1) cout<< -1 << endl;
else {
    for(auto c : ans) cout<< c << " ";
    cout<< endl;
}

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}