#include <bits/stdc++.h>
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
 string s; cin>>s;
 sort(s.begin(),s.end());
 vector<string>v;
do{
    v.push_back(s);
}while(next_permutation(s.begin(),s.end()));
cout<<v.size()<<endl;
for(int i=0;i<v.size();i++) cout<<v[i] <<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}