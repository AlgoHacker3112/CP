/**
*     author:  AlgoHacker3112
*    created: 2022-11-02 16:51:48
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

vector<int> divisor(int n){
    vector<int> div;
    int k = sqrt(n);
    for(int i=1;i<=k;i++){
       if(n%i == 0){
        div.push_back(i);
        if(n/i != i) div.push_back(n/i);
       }
    }
    return div;
}

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
//  cin>>t;
 while(t--){
 int n; cin >> n;
  map<int,int> m;
  int temp = n;
  while(temp){
    m[temp%10]++;
    temp/=10;
  } 
 vector<int> d=divisor(n);
 int count =0;
 for(int i=0;i<d.size();i++){
    int tmp = d[i];
    bool flag = 0;
    while(tmp){
        cerr << tmp%10 << endl;
        if(m[tmp%10]){
            flag = 1;
            break;
        }
        tmp /= 10;
    }
    if(flag) count++;
 }
 debug(m);
 debug(d);
 cout << count << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}