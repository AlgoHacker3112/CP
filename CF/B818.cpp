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
 int n,k,r,c; cin>>n>>k>>r>>c;
 r--,c--;
 r%=k;
 c%=k;
 debug(r);
 debug(c);
 int check=0;
 char arr[k][k];
 for(int i=0;i<k;i++){
    if(i==r){
        for(int j=0;j<k;j++){
           if(j==c) arr[i][j]='X';
           else arr[i][j]='.';
        }
    }
    else{
     for(int j=0;j<k;j++){
          arr[i][j]='.';
     }
     if(check==c) check++;
      arr[i][check]='X';
    debug(check);
    check++;
    }
   
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i%k][j%k];
    }
    cout<<endl;
 }
//  for(int i=0;i<k;i++){
//     for(int j=0;j<k;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}