/**
*     author:  AlgoHacker3112
*    created: 2022-11-06 00:50:17
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
 cin>>t;
 while(t--){
 ll d,k; cin >> d >> k;
 ll moves = (double)(d)/((double)(k)/sqrt(2));
 ll x = moves*k,y=(moves-1)*k;
 if((d*d - x*x -y*y) < 0) moves--;
 debug(moves);
 if(moves % 2 == 1) cout << "Ashish" << endl;
 else cout << "Utkarsh"<< endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}