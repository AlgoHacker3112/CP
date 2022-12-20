/**
*     author:  AlgoHacker3112
*    created: 2022-12-08 12:24:40
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
    string s;
    cin >> s;
    int n; cin >> n;
    map<string, pair<int,int> > m;
    for(int i=0;i<n;i++){
        string s1; 
        cin >> s1;
        m[s1] = {i+1,1};
    }
    find(m,s);
 
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}