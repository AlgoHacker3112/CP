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

struct DSU {
	vector<int> e;
	DSU(int N) { e = vector<int>(N, -1); }
 
	// get representive component (uses path compression)
	int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }
 
	bool same_set(int a, int b) { return get(a) == get(b); }
 
	int size(int x) { return -e[get(x)]; }
 
	bool unite(int x, int y) {  // union by size
		x = get(x), y = get(y);
		if (x == y) return false;
		if (e[x] > e[y]) swap(x, y);
		e[x] += e[y]; 
    e[y] = x;
		return true;
	}
};

int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 int n; cin>>n;
 string s; 
 cin >> s;
  DSU dsu(26);
  string ans = "";
  map<char, int> assigned,check; 
  map< char , char > m;
  for( char c : s){
    if(assigned[c]) ans += m[c];
    else{
      for(int i=0 ; i<26 ;i++){
       if(dsu.same_set( i, c - 'a') and dsu.size(i) <=  25  || check[i+'a']) continue;
       else{
        ans += char('a' + i);
        dsu.unite( i, c- 'a');
        assigned[c] = 1; check[i+'a'] = 1;
        m[c] = char('a' + i);
        break;
       }
      }
    }
  }
  // debug(m);
  // debug(assign);
 cout << ans << endl;

 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}