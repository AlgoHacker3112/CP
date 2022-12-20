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
int gcd (int a, int b){
    if(b==0) return a;
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
vector<int> a(1001);

for(int i = 0;i < n ;i++){
  cin >> v[i];
  a[v[i]] = i+1;
} 
int ans = INT_MIN;
for(int i =1 ;i< 1001;i++){
    if(a[i] != 0)
    for(int j =1;j < 1001;j++){
        if(a[j] != 0){
        if(gcd(i , j) == 1) 
        ans = max(a[i] + a[j] ,ans);
        }
    }
}
cout << ((ans == INT_MIN) ? -1 : ans )<< endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}