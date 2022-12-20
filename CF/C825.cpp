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
 vector <int> v(n);
 for(int i=0;i<n;i++)
 {
    cin >> v[i];
 }
 int ans = 0;
 int count = 0;
 for(int i=0; i<n ;i++){
    if(v[i] > count)
    {
        count++;
        ans += count;
    }
    else{
        count = v[i];
        ans += count;
    }
   
    
 }
 debug(count);
 debug(ans) ;
 
 cout << ans << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}