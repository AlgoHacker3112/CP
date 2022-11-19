#include <bits/stdc++.h>
#warning change ll
#define int long long
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
 int n,m; cin >> n >> m;
 vector<int> psum(m),a;
 for(int i=0 ; i<m ; i++){
    cin>>psum[i];
    if(i>0) a.push_back(psum[i]-psum[i-1]);
 }
 if(a.size() == 0){
    cout << "Yes" << endl;
    continue;
 }
 if(!is_sorted(begin(a),end(a))){
    cout<< "No" << endl;
 }
 else{
    int k = psum[0] - a[0]*(n-m);
    if(k <= a[0] ) cout << "Yes" <<endl;
    else cout << "No" <<endl;
 }


 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}