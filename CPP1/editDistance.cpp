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
//setIO("");
ios_base::sync_with_stdio(false);
freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
//  cin>>t;
 while(t--){
//  int n; cin>>n;
string s1,s2;
cin>>s1>>s2;
if(s1.length()<=s2.length()){
    map<char,int> m;
    for(int i=0;i<s1.length();i++) m[s1[i]]++;
    int count=0;
    for(int i=0;i<s2.length();i++){
        if(m[s2[i]]){
         count++;
         m[s2[i]]--;
        }
    }
    cout<<s2.length()
}

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}