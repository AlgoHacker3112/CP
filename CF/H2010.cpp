/**
*     author:  AlgoHacker3112
*    created: 2022-11-02 17:02:56
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
 
 for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        int k = i*j;
        string s ="";
        while(k){
            s += to_string(k%n);
            k /= n;
        }
        reverse(all(s));
        if(j > 0 && s.size() == 1) cout << " ";
        cout <<s << " ";
    }
    cout << endl;
 }
 
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}