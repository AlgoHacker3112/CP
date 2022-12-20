/**
*     author:  AlgoHacker3112
*    created: 2022-10-17 17:05:53
**/ 

#include <bits/stdc++.h>

using namespace std;
#define intl long long
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
 int  n,q; 
 cin >> n >> q;
 vector <int> v(n);
 int count = 0;
 intl sum = 0;
 for(auto &c : v){
  cin >> c;
  if(c%2 == 0) count++;
  sum += c;
 }
 for(int i=0;i<q;i++){
    int tj,x;
    cin >> tj >> x;
    if(tj == 0){
        sum += count*x;
        cout << sum << endl;
        if(x%2) count =0;
    }
    else{
        sum += (n - count)*x;
        cout << sum << endl;
        if(x%2) count = n;
    }
 }
 
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}