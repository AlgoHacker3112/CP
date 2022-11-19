/**
*     author:  AlgoHacker3112
*    created: 2022-11-02 14:29:43
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
 int n,k,m; cin >> n >> k >> m;
 vector<int> v(n);
 for(auto &c : v) cin >> c;

 vector<int> rem(n);
 map<int,int> freq;
 for(int i=0;i<n;i++){
  rem[i] = v[i]%m;
  freq[rem[i]]++;
 }
 int temp = -1;
 for(auto it : freq){
    if(it.second >= k){
         temp = it.first;
         break;
    }
 }
 debug(rem);
 debug(v);
 debug(freq);
 if(temp == -1) cout <<"No" <<endl;
 else{
    cout<<"Yes"<<endl;
 int count =0;
 for(int i=0;i<n;i++){
    if(count < k){
        if(rem[i] == temp){
            cout << v[i] <<" ";
            count++;
        }
    }
 }
 }

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}