/**
*     author:  AlgoHacker3112
*    created: 2022-11-04 12:02:05
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
 int n; cin >> n;
 string s; cin >> s;
 int cnt =0;
 for(int i=0 ; i<n ;i++){
    if(s[i] == '9') cnt++;
 }
 string ans;
 if(cnt == n){
   for(int i=0;i<n+1;i++){
    if(i == 0 || i == n) ans += '1';
    else ans += '0';
   }
 }
 else{
    if(n%2 == 1){
        string s1,s2; 
        s1 = s.substr(0,n/2);
        s2 = s.substr(n/2 + 1 , n/2);
        // reverse(all(s2));
        string s3 = s1;
        reverse(all(s3));
        debug(s1);
        debug(s2);
        debug(s3);
        
        ans += s1 ;
        ans += s[n/2];
        ans += s3;
        debug(ans);
        bool flag =0;
        for(int i=0 ; i<n/2;i++){
        if(s1[i] <= s2[n/2 -1 - i]) flag = 1;
        }
        debug(flag);
        if(flag){
            
            if(int(ans[n/2] - '0') < 9) {
                ans[n/2] += 1;
            }
            else{
                ans[n/2] = '0';
                if(int(ans[n/2 -1]) < 9) {
                    ans[n/2 + 1] += 1 ;
                    ans[n/2 - 1] += 1 ;
                }
                else{
                int k = 1;
                while(ans[n/2 - k] == '9'){
                   ans[n/2 + k] = ans[n/2 - k] = '0';
                   k++;
                }
               ans[n/2 + k] += 1; 
               ans[n/2 - k] += 1;
                }
            }
        }
    }
    else{
       string s1,s2; 
        s1 = s.substr(0,n/2-1);
        s2 = s.substr(n/2 + 1 , n/2-1);
        // reverse(all(s2));
        string s3 = s1;
        reverse(all(s3));
        debug(s1);
        debug(s2);
        debug(s3);
        
        ans += s1 ;
        ans += s[n/2-1];
        ans += s[n/2];
        ans += s3;
        debug(ans);
        bool flag =0;
        for(int i=0 ; i< n/2 ;i++){
        if(s1[i] <= s2[n/2 -1 - i]) flag = 1;
        }
        debug(flag);
        if(flag){
            
            if(int(ans[n/2-1]) < int(ans[n/2])) {
                ans[n/2 - 1] += 1;
                ans[n/2] = ans[n/2 - 1];
                cerr << "f1" << endl;
            }
            else if(int(ans[n/2 - 1]) > int(ans[n/2])){
                ans[n/2] = ans [n/2 - 1];
                cerr << "f2" << endl;
            }
            else{
                cerr << "f3" << endl;
                if(int(ans[n/2]) < 9){
                    ans[n/2 -1 ] += 1;
                    ans[n/2] = ans[n/2 -1];
                }
                else{
                int k = 1;
                while(ans[n/2 - k] == '9'){
                   ans[n/2] = ans[n/2 - k] = '0';
                   k++;
                }
               ans[n/2 + k -1] += 1; 
               ans[n/2 - k] += 1;
                }
            }
        } 
    }
 }
  cout << ans << endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}