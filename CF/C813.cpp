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
 vector<int> v(n);
 map<int,int> m;
 for(int i=0;i<n;i++){
    cin>>v[i];
    m[v[i]]++;
 }
    int temp=v[n-1];
    m[v[n-1]]--;
    int i;
   for(i=n-2;i>=0;i--){
    //  m[temp]--;
    if(temp>v[i]){
       if(m[temp]!=0){
        // temp=i;
        break;
       }
    }
    if(temp<v[i]){
      
     break;
    } 
    temp=v[i];
    m[temp]--;
 }
 debug(i);
 set<int>st;
 if(i!=-1){
 for(int j=0;j<=i;j++){
    st.insert(v[j]);
 }
 debug(st);
 cout<<st.size()<<endl;
 }
 else{
    cout<<0<<endl;
 }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}