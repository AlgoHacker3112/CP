/**
*     author:  AlgoHacker3112
*    created: 2022-11-07 12:27:55
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

 while(t--){
string s; 
cin >> s;
string reqS = "CODEFORCES";
int j=0;
for(int i=0;i<s.length();i++){
    if(s[i] == reqS[j] && j<10) j++;
}
if(j==10){
    if(s[0] != 'C'){
        bool flag = 0;

            string check = s.substr(s.length()-10,10);
            if(check == reqS) flag = 1;
            debug(check) ;

        if(flag) cout << "YES" << endl;
        else cout <<"NO" << endl;
    }
    else{
        int n=0,l=0,r=0;
        while(s[l] == reqS[r]) l++,r++;
        n += l;
        debug(n);
        l=s.length()-1,r=9;
        while(s[l] == reqS[r]) l--,r--;
        n += s.length() - l - 1;
        debug(n);
        if(n >= 10) cout << "YES" << endl;
        else cout << "NO" << endl;
    } 
}
else cout << "NO" << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}