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
//  vector<int> perSq;
//  for(int i=1;i*i<=1000000;i++){
//   perSq.push_back(i*i);
//  }
//  int dp[100001];
//  for(int i=1;i<100001;i++){
//     auto it=lower_bound(perSq.begin(),perSq.end(),i)-perSq.begin();
//     dp[i]=perSq[it];
//  }
 while(t--){
    vector<int> ans;
 int n; cin>>n;
 n--;
 while(n>=0){
  int k;
   int sq=sqrt(n);
   if(sq*sq==n) k=sq*sq-n;
   else{
      sq++;
k=sq*sq-n;
   } 
  int temp=k;
  while(k<=n){
    ans.push_back(k);
    k++;
  }
  n=temp-1;
 }
 reverse(ans.begin(),ans.end());
 
 for(auto i:ans) cout<<i<<" ";
 cout<<endl; 

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}