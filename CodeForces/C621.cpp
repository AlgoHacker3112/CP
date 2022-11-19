/**
*     author:  AlgoHacker3112
*    created: 2022-11-14 22:42:34
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

 while(t--){
string s;
cin >> s;
map <int ,int> freq;
for(int i=0;i<s.length();i++){
   freq[s[i] - 'a']++;
}
debug(freq);
int n = s.length();
ll ans = 0;
for(int i=0;i<26 ; i++){
    for(int j=0;j<26;j++){
        map < int,int> m = freq;
        ll temp = 0;
        if(i==j){
            if(freq[i] == 1) temp = 1;
            else if(freq[i] == 2) temp = 2;
            else temp = freq[i]*(freq[i]-1)/2;
            ans = max(ans,temp);
        }
        else{
        for(int k=0;k<n;k++){
            if(s[k] - 'a' == j) m[j]--;
            if(s[i] - 'a' == i){
                temp += m[j];
            }
        }
            ans = max(ans,temp);
        }
    }
}
  cout << ans << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}