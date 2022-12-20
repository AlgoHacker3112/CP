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
 map<string, bool > p1;
 map<string, bool > p2;
 map<string, bool > p3;

 for(int i=0;i< n;i++)
 {
    string temp;
    cin>>temp;
    p1[temp]=1;
 }
for(int i=0;i< n;i++)
{
    string temp;
    cin>>temp;
    p2[temp]=1;
 }
 for(int i=0;i< n;i++)
 {
    string temp;
    cin>>temp;
    p3[temp]=1;
 }
  int score1=0,score2=0,score3=0;
  for(auto it: p1){
    int count=0;
    if(p2[it.first] and it.second) count++;
    if(p3[it.first] and it.second) count++;
    if(it.second){

    if(count==2) score1+=0;
    if(count==1) score1+=1;
    if(count==0) score1+=3;
    }
  }
  for(auto it: p2){
    int count=0;
    if(p1[it.first] and p2[it.first]) count++;
    if(p3[it.first] and p2[it.first]) count++;
    if(it.second){

    if(count==2) score2+=0;
    if(count==1) score2+=1;
    if(count==0) score2+=3;
    }
  }
  for(auto it: p3){
    int count=0;
    if(p2[it.first] and p3[it.first]) count++;
    if(p1[it.first] and p3[it.first]) count++;
    if(it.second){

    if(count==2) score3+=0;
    if(count==1) score3+=1;
    if(count==0) score3+=3;
    }
  
  }
  debug(p1);
  debug(p2);
  debug(p3);
  cout<<score1<<" "<<score2<<" "<<score3<<endl;
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}