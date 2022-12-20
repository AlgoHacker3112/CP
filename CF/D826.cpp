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
 int n; cin >> n;
vector <int> a(n);
for(auto & c : a) cin >> c;
bool flag = 0;
for( int i = 0; i < n; i+=2)
{
   if(abs(a[i]- a[i+1]) != 1) flag = 1; 
}
if(flag) cout << "-1" << endl;
else{
while(n){
    n = n/2;
    for(int i = 0;i < n/2; i++){

    }
}
}

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}