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
 int ind1=-1; // first index of one
 int ind=-1; // last index of zero
 bool f=0;
 for(int i=0;i<n;i++){
    if(s[i]=='1' and f==0) ind1=i,f=1; 
    if(s[i]=='0') ind=i;
 }
 if(n==1 || ind1>ind || ind1==-1 || ind==-1) cout<<s<<endl;
 else{
 string s1=s.substr(0,(ind1!=-1)?ind1:0);
 string s2=s.substr((ind!=-1)?ind:0,(ind!=-1)?n-ind:0);
 debug(s1);
 debug(s2);
 debug(ind1);
 debug(ind);
 cout<<s1+s2<<endl;
 }

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}