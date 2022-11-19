#include <bits/stdc++.h>
#warning change ll
#define int long long
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
//  cin>>t;
 while(t--){
    int n,k,s;
    cin>> n>> k>> s;
    if(s<k || s>k*(n-1)){
        cout<< "NO"<< endl;
    }
    else{
        int r = s/k +s%k+1;
        int l = 1+s%k;

        cout<<"YES"<< endl;
        for(int i=0;i<k;i++){
            if(i%2==0){
                cout<< r<<" ";
            } else{
                cout<<l<< " ";
            }
        }
        cout<< endl;

    }

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}