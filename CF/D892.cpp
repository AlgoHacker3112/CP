/**
*     author:  AlgoHacker3112
*    created: 2022-10-25 17:36:33
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
//  cin>>t;
 while(t--){
 int n,x; cin >> n >> x;
 map <int, int> m;
 for(int i=0;i<n;i++){
    int temp; 
    cin >> temp;
    m[temp]++;
 }
 bool flag = 0;
 for(int i=1;i<x;i++)
 {
    if(m[i] == 0) continue;
   if(m[i] < i + 1 || m[i]%(i+1) != 0 ){
    cout << "NO" << endl;
    flag = 1;
    break;
   }
   else{
    m[i+1] += m[i]/(i+1);
   }
 }
 if(!flag) cout << "YES" << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}