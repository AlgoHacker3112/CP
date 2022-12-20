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
 int n,k; cin>>n>>k;
 string s;
 cin >> s;
 map <char,int> m;
 for( int i=0; i<n; i++){
   m[s[i]]++;
 }
 string ans;
 int nb = n/k;
 for(int j=0; j<k; j++){
   for(int i=0; i<26; i++){
      if(m[char('a' + i)]){
         m[char('a' + i)]--;
      }
      else{
         ans+=char('a' + i);
         break;
      }
      if(i+1 == nb){
      ans += char('a' + i + 1);
      break;
      } 

   }
 }
 cout << ans <<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}