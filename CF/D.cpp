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
  string s; cin>>s;
  vector<int>ans(n);
  vector<int> change;
  int sum=0;
  for(int i=0;i<n;i++){
    if(s[i]=='L') sum+=i;
    else sum+=(n-1-i);
  }
  if(n%2==0){
    for(int i=0;i<n;i++){
        if(i<n/2){
            if(s[i]=='L'){
                change.push_back(n-1-2*i);
            }
        }
        else{
            if(s[i]=='R')
            {
                change.push_back(abs(n-1-2*i));  
            }
        }
    }
  }
  else{
    for(int i=0;i<n;i++)
    {
       if(i<n/2)
       {
          if(s[i]=='L') change.push_back(abs(n-1-2*i));
       }
       else if(i>n/2)
       {
        if(s[i]=='R') change.push_back(abs(n-1-2*i));
       }
    }
  }
  sort(begin(change),end(change),greater <int>());
  int i;
  for( i=0;i<change.size();i++){
    ans[i]=sum+change[i];
    sum+=change[i];
  }

while(i<n){
    if(i==0) ans[i]=sum;
   if(i!=0) ans[i]=ans[i-1];
   i++;
}
for(auto it : ans){
    cout<<it<<" ";
}
cout<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}