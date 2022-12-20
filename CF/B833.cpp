/**
*     author:  AlgoHacker3112
*    created: 2022-11-24 11:04:46
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
 cin>>t;
 while(t--){
 int n; cin >> n;
 string s; cin >> s;
 ll ans = 0;
 for(int i=0;i<n;i++){
    map <int,int> freq;
    int count = 0; // distinct digits
    int mx = INT_MIN;
    for(int j = i; j < n && (mx <=10); j++){
        if(freq[s[j] - '0'] == 0)  count++;
        freq[s[j] - '0']++;
         mx = max(mx , freq[s[j] - '0']);
        if(count >= mx) ans++;
    }
 
 }
 cout << ans << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}