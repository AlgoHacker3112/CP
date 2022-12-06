/**
*     author:  AlgoHacker3112
*    created: 2022-12-03 10:38:47
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
class A{
    public :
    virtual void display() = 0;
};
class B: public A{
    public :
    void display (){
        cout << "derived class is invoked"<< endl;

    }
};

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 
 while(t--){
 A *a;
 B *b;

 b -> display();

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;
    return 0;
}