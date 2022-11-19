/**
*     author:  AlgoHacker3112
*    created: 2022-11-01 12:39:49
**/ 

#include <bits/stdc++.h>

using namespace std;

 #ifdef DEBUG
#include <bits/debug.h> // replace with your path
#else
#define debug(x)
#endif
int reverseNum(int n){
    string s = to_string(n);
    reverse(begin(s),end(s));
    int k = stoi(s);
    return k;
}

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
//  cin>>t; 
 while(t--){
 int a,b;
 cin >> a >> b;
 cout << a + reverseNum(b) << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}