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
// freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 int n,x,y; cin >> n >> x >> y;
 string s1,s2; cin >> s1 >> s2;
 vector <int> a(n),b;
 for( int i = 0; i < n; i++) a[i] = int(s1[i] - '0');
 debug(a);
 for(int i = 0; i < n; i++){
    // int temp = (s2[i] - '0');
    if(a[i] != int(s2[i] - '0')) b.push_back(i);
 }
 debug(b);
 if(b.size() % 2) cout<< -1 <<endl;
 else
 {
    vector <int> diff;
    for(int i = 1; i < b.size(); i++){
        diff.push_back(b[i] - b[i-1]);
    } 
    int count = 0;
    bool flag = 0;
    for(int i = 0; i < diff.size() ; i++)
    {
        if(diff[i] == 1 and flag == 0){
            count++;
            flag = 1;
        }
        else if(diff[i] == 1 and flag == 1){
            flag = 0;
        }
        else flag = 0;
    }
    int cost = 0;
    if( diff.size() == 1){

        if( x > 2*y && count == 1) cost = 2*y;
        else if(count == 1) cost = x;
        else cost = y;
    }
    else{
        if(x < y) cost = count*x + y*(b.size()/2 - count);
        else cost = b.size()/2*y;
    }
     cout << cost << endl;
 }

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}