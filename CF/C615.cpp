/**
*     author:  AlgoHacker3112
*    created: 2022-11-01 00:33:12
**/ 

#include <bits/stdc++.h>

using namespace std;

 #ifdef DEBUG
#include <bits/debug.h> // replace with your path
#else
#define debug(x)
#endif
vector<int> v;
void divisor(int n){
    int k = sqrt(n);
    for(int i=2;i<=k;i++){

        if(n%i == 0) {
        v.push_back(i);
        if(n/i != i){
         v.push_back(n/i);
        } 
        }
    }
}

int32_t main(){

ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
 cin>>t;
 while(t--){
 int n; cin >> n;
 
 divisor(n);
 sort(begin(v),end(v));
 int k = v.size();
 debug(k);
 if(k >= 3){
    int i=1,a=v[0]*v[i];
    
 while(n/a > v[i] && i < v.size()){
    a = v[0]*v[i];
    if(n%a == 0){
    cout <<"YES"<<endl;
    cout << v[0] <<" " << v[i] << " " << n/a<< endl;
    break;
    }
    else{
        i++;
    }
 }
 if(i==v.size() || n/a <= v[i]) cout << "NO" << endl;
 } 
 else cout <<"NO" << endl;
 debug(v);
 v.clear();
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}