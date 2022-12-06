

/**
*     author:  AlgoHacker3112
*    created: 2022-12-02 00:53:54
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

class Student{
    public : 
    static int count ;
    static string School;
    string name;
    int marks;
    int age ;

    void insert(string n, int m, int a){
        name = n;
        marks = m;
        age = a;
    }
    void display(){
        cout << name << " " << marks << " " << age <<endl;
    }
    ~Student(){
        cout<< "destructor invoked" << endl;
    }
    Student(string name ,int marks, int age){ // constructor
          this -> name = name ;
         this ->  marks = marks;
          this -> age = age;
          count++;
          // count is initialised when the object is made so any chages will lead to change in orginal value of count
          // this is pointer which refers to current instance of the class
    }

};
string Student::School = "DPS" ;
int Student::count= 0;

class Accountant{
    public :
 float salary = 8000;
}; 
class programmer:public Accountant{
    public :
    int rating = 1200;
};

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 int t=1; 

 while(t--){
 programmer p ;
 cout << p.salary <<endl;


 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}
