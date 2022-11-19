/**
*     author:  AlgoHacker3112
*    created: 2022-11-01 12:09:40
**/ 

#include <bits/stdc++.h>
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
//  cin>>t;
 while(t--){
 ll n; cin >> n;
 ll temp = n;
 vector<int> digits;
 while(n){
    digits.push_back(n%10);
    n/=10;
 }
 debug(digits);
 int sum =0;
 for(int i=0;i<digits.size()-1;i++){
   sum += digits[i];
 }
 debug(sum);
  if(sum >= (9*(digits.size()-1) -1)) cout << temp << endl;
  else if(temp < 10) cout <<temp << endl;
  else if(digits[digits.size() - 2] == 9){
    
   int k = digits.size();
   int j = k-2;
   while(digits[j] == 9){
    j--;
   }
   j++;
   debug(j);
    for(int i=1;i<=k;i++){
        if(i == 1) cout << digits[k-1] ;
        else if(i == k-j){
            cout << 8;
        }
        else cout<<9;
    }
    cout << endl; 
  }
  else{
    int k = digits.size();
    for(int i=0;i<k;i++){
        if(i == 0){
            if(digits[k-1]>1)
            cout << digits[k-1]-1;
        }
        else cout<<9;
    }
    cout << endl;
  }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}