/**
*     author:  AlgoHacker3112
*    created: 2022-11-06 14:54:04
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
#define ll long long

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
//  cin>>t;
 while(t--){
 int n; cin >> n;
 vector<int> a(n);
 for(int i=0;i<n;i++){
    int temp;
    cin >> temp;
    a[i] = abs(temp);
 }
 sort(all(a));
 int j=0;
 ll ans = 0;
 for(int i=0;i<n;i++){
    while((a[j+1] <= 2*a[i]) && j+1 < n ) j++;
    ans += j - i;
 }
 cout << ans << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}