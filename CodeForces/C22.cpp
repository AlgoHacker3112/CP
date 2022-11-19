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
 int odd = 0, even = 0;
 for (int  i = 0; i < n; i++)
 {
    /* code */ 
    int temp ;
    cin >> temp;
    if(temp%2) odd++;
    else even++; 

 }
 if(odd%4 == 0) cout << "Alice" << endl;
 
 if(odd%4 == 1){
    if(n%2 == 0) cout << "Alice" << endl;
    else cout << "Bob" << endl;
 }
 if(odd%4 == 2){
    cout << "Bob" << endl;
 }
 if(odd%4 == 3) 
   
    cout << "Alice" << endl;
   
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}