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

int countDigits(int n){
    return to_string(n).length();
}

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
 priority_queue<int> a,b;
 for(int i=0;i<n;i++){
    int temp; cin>>temp;
    a.push(temp);
 }
 for(int i=0;i<n;i++){
    int temp; cin>>temp;
    b.push(temp);
 }
 
 int ans = 0;
 while(!a.empty()){
    int at = a.top();
    int bt = b.top();
    if(at == bt)
    {
        a.pop();
        b.pop();
    }
    else if(a.top() > b.top())
    {

       
       a.pop();
       a.push(countDigits(at));
       ans++;
    }
    else{

        b.pop();
        b.push(countDigits(bt));

        ans++;
    }
    
 }
   cout<<ans<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}