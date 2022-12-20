/**
*     author:  AlgoHacker3112
*    created: 2022-10-15 11:56:52
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
 int n,m; cin >> n >> m;
 
 vector <int> v(n);

 for(int i=0 ;i<n;i++){
    cin >> v[i];
 }
 int k;
 vector <int> b(k);
 for(int i=0;i<k;i++){
    cin >> b[i];
 }

 vector< pair<int,int> > a1;
 for(int i=0;i<n;i++){
    int count =0;
    while(v[i]%m == 0){
        v[i]/=m;
        count++;
    }
    if(a1.back().first == v[i] and a1.size()){
       a1.back().second += count; 
    }
    else{
       a1.emplace_back(v[i],count);
    }
 }
 vector <pair<int,int>>  b1;
 for(int i=0;i<m;i++){
    int count =0;
    while(b[i]%m == 0){
        b[i]/=m;
        count++;
    }
    if(b1.back().first == b[i] and b1.size()){
        b1.back().second += count;
    }
    else{
        b1.emplace_back(b[i],count);
    }
 }
 if(a1 == b1) cout << "YES" << endl;
 else cout << "NO" << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}