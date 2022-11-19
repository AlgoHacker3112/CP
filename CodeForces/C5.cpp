/**
*     author:  AlgoHacker3112
*    created: 2022-11-14 11:05:00
**/ 

#include <bits/stdc++.h>
#define all(a) begin(a),end(a)
#define ll long long

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
 while(t--){
 string s; cin >> s;
 int n = s.length();
 stack <char> st;
 stack <int> index;
 vector<int> v;
 for(int i=0;i<n;i++){
    if(s[i] == '(') st.push('('),index.push(i);
    else if(s[i] == ')' && !st.empty()) st.pop(),index.pop();
    else v.push_back(i); 
 } 
  while(!index.empty()){
    v.push_back(index.top());
    index.pop();
  }
  sort(all(v));
  debug(v);
  map<int,int> freq;
  int mx = -1;
  if(v.size() > 1){
  for(int i=0;i<v.size()-1;i++) {
    freq[v[i+1]-v[i]-1] ++;
    mx = max(mx,v[i+1]-v[i]-1);
  }
  } 
   if(v.size() > 0 && v.back() != n-1){
    mx = max(mx,n- v.back() - 1);
    freq[n- v.back() - 1]++; 
  }
  if(v.size() == 0){
     mx = n;
     freq[mx]++;
  }
  
  if(mx == 0){
    cout << mx << " " << 1 << endl;
  } 
  else{
    cout << mx << " " << freq[mx] <<endl;
  }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}