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
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
//  int n; cin >> n;
char arr[8][8];
for(int i=0;i<8;i++){
    for(int j=0; j<8;j++) 
     cin >> arr[i][j];
}
for(int i=0;i<8;i++){
    int countVB =0, countHB =0, countVR = 0,countHR=0;
    for(int j=0; j<8;j++) {
    if(arr[i][j] == 'R') countHR++;
    // if(arr[i][j] == 'B') countHB++;
    // if(arr[j][i] == 'R') countVR++;
    if(arr[j][i] == 'B') countVB++;
    }
    if(countHR == 8){
        cout << 'R' << endl;
        break;
    }
    if(countVB == 8){
        cout << 'B' << endl;
        break;
    }
     
}


 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}