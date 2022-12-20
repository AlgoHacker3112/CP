/**
*     author:  AlgoHacker3112
*    created: 2022-10-20 20:45:34
**/ 

#include <bits/stdc++.h>

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
    int count = 0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i] == 1) count++;
    }
    int ans = 0;
    sort(begin(v),end(v));
    for(int k=1; k <= (n+1)/2;k++){
         bool check = 1;
        for(int i=0; i<k; i++){
           if(v[i+k-1] > i+1) check = 0;
        }
        if(check) ans = k;
    }
    cout << ans << endl;
    }
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}