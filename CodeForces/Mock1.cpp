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
 string s="";
 int j=0;
 int n = logs[i].size();
 while(logs[i][j]!=" "){
     s+=logs[i][j];
     j++;
 }

 
 map<string , string> data;
 map<string , bool> login;
 map<string ,bool > register;
 map<string , bool > logout;
 if(s == "register"){
    string username = "";
    j++;
    while(logs[i][j]!=" "){
        username+=logs[i][j];
        j++;
    }
    j++;
    string password="";
    while(j!=n){
        password+=logs[i][j];
        j++;
    }
    data[username]=password;
    if(!register[username])
    { 
    cout<<"Registered Succesfully"<<endlP;
    }
    else 
    {
        cout<<"Username already exists"<<endl;
    }
    
    register[username]=1;

 }
 if(s == "login"){
    string username = "";
    j++;
    while(logs[i][j]!=" "){
        username+=logs[i][j];
        j++;
    }
    j++;
    string password="";
    while(j!=n){
        password+=logs[i][j];
        j++;
    }
    login[username]=1;
    if(data[username]==password){
       cout<<"Logged In Successfully"<<endl;
    }
    else cout<<"Login Unsuccessful"<<endl;

 }
    if(s == "logout"){
        string username = "";
    j++;
    while(j!=n){
        username+=logs[i][j];
        j++;
    }
     if(login[username]){
        cout<<"Logged Out Successfully"<<endl;
     }
     else{
        cout<<"Logout Unsuccessful"<<endl;
     }
    }
 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}