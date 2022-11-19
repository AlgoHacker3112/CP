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
if(n%2 == 1){
    for(int i = 0; i< n-3;i+=2){
        a[i] = n-i-1;
        a[i+1] = n -i;
    }
    a[n-1] = 3 ;
    a[n-2] = 2;
    a[n-3] = 1;
}
else{
   for(int i = 0; i< n;i++){
        a[i] = n-i;
    } 
}
if(n==1 || n==3) cout << -1 << endl;
else if(n==2) cout << 2 << " " << 1 << endl;
else{
    for(auto c : a) cout << c << " ";
    cout << endl;
}
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}