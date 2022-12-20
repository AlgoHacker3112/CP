/**
*     author:  AlgoHacker3112
*    created: 2022-10-15 21:49:53
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
    int a[n];
    map<int,bool> done;
    for(int i=0;i<n;i++){
        cin>> a[i];
        done[a[i]] = false;
    }
    vector<pair<int,int>> inv;
    for(int i=n-2;i>=0;i--){
        if(a[i]>a[i+1]){
            inv.push_back({a[i]-a[i+1],i+1});
        }
    }

    sort(begin(inv),end(inv));
    debug(inv);
    vector<int> res;
    
    for(auto x: inv){
        res.push_back(x.second);
        done[x.second] = true;
    }
    debug(res);
    reverse(begin(res),end(res));
    for(int i=0;i<n;i++){
        if(!done[a[i]]){
            res.push_back(0);
        }
    }
    reverse(begin(res),end(res));
    for(auto x: res){
        cout<< x+1<<" ";
    }
    cout<< endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}
