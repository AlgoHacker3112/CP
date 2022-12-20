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
 set <int> st;
 for(int i=0 ;i<n;i++) {
    int temp; cin>> temp;
    st.insert(temp);
 }
 if(st.size() == n) cout << "YES" << endl;
 else cout<< "NO" << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}