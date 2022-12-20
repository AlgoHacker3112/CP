#include <bits/stdc++.h>
#warning change ll
#define ll long long
#define ld long double

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
 string s1 , s2 ;
 cin >> s1 >> s2;
 int k = s1.size();
 int m = s2.size();
 if(s1[k-1] != s2[m-1]){
    if(s1[k-1] == 'L' and (s2[m-1] == 'S' || s2[m-1] == 'M') || ((s1[k-1] == 'M' and s2[m-1] == 'S') )) cout << '>' << endl;
    else cout << '<' << endl;
 }
 else{
    if(k > m and s1[k-1] == 'L') cout << '>' << endl;
    if(k > m and s1[k-1] == 'S') cout << '<' << endl;
    if(k < m and s1[k-1] == 'L') cout << '<' << endl;
    if(k < m and s1[k-1] == 'S') cout << '>' << endl;
    if(k == m) cout << '=' << endl;
    
 }
    


 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}