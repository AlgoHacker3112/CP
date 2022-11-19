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
int gcd (int a , int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 int n; cin >> n;
 vector <int> v(n);
 for(int i=0; i<n ;i++)
 {
    cin >> v[i];
 }
 bool flag =0;
 for(int i=1; i<n-1; i++){
    int  k = gcd(v[i-1],v[i+1]);
    if(v[i]%k != 0) flag =1;
 }
 if(flag == 0) cout << "YES" << endl;
 else cout << "NO" <<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}