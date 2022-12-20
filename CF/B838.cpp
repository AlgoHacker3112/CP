/**
*     author:  AlgoHacker3112
*    created: 2022-12-15 20:37:25
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

int MinDiv(int n){
    int k=sqrt(n);
    for(int i=2;i<=k;i++){
        if(n%i == 0) return i;
    }
    return n;
}

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
 cin>>t;
 while(t--){
 int n; cin >> n;
 vector<int> v(n);
 for(int i=0;i<n;i++) cin >> v[i];
 int maxEle = INT_MIN;

 int minEle = INT_MAX;
 for(int i=0;i<n;i++){
    minEle = min(minEle,v[i]);
    maxEle = max(maxEle,v[i]);
 }
 if(maxEle % minEle == 0) cout << 0 << endl;
 else{
   int count = 0;
   map <int,int> m;
   if(v[0] > minEle) m[1] += minEle - (v[0]%minEle);
   for(int i=1;i<n;i++){
    int sum = 0;
    if(v[i] > minEle && v[i] % minEle != 0){
        int rem = v[i] % minEle;
        sum += rem;
        v[i] += rem;
        m[i+1] += minEle - rem;
    }
    if(v[i] > v[i-1]){
        if(v[i] % v[i-1] != 0){
            m[i+1] += v[i-1] - (v[i-1]%minEle);
        }
    }
    else{
        if(v[i-1]%v[i] != 0){
            m[i-1] += v[i] - (v[i]%minEle);
        }
    }

   }
    cout << m.size() << endl;
    for(auto c:m){
        cout << c.first <<" " << c.second << endl;
    }
 }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}