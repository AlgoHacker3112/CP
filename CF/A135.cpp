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
 cin>>t;
 while(t--){
 int n; cin>>n;
 int sum=0;
 int ind=-1;
 int max_=-1;
 vector<int> a(n);
 for(int i=0;i<n;i++){
  cin>>a[i];
  if(a[i]>max_){
    max_=a[i];
    ind = i+1;
  }
 }

 cout<<ind<<endl;
 }

cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}