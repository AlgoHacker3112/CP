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
 int n,q; cin>>n>>q;
 vector<int> v(n);
 int index=-1;
 for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]==n) index=i;

 }
 
  for(int i=0;i<q;i++){
    int j,k; cin>>j>>k;
     vector<int> score(n);
            int l=0,m=1;
    if(k<=index){
            while(k--){
                if(m<n){
                if(v[l]>v[m]){
                    m++;
                    score[l]++;
                }
                else{
                    score[m]++;
                    l=m;
                    m++;
                }
                
            }
            }
            cout<<score[j-1]<<endl;
    }
    if(k>index){
     while(index--){
                if(m<n){
                if(v[l]>v[m]){
                    m++;
                    score[l]++;
                }
                else{
                    score[m]++;
                    l=m;
                    m++;
                }
                
            }
            } 
    }
    score[n-1]+=k-i;
    cout<<score[j-1]<<endl;

  }

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}