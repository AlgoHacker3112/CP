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
 
const int rem = 1e9 + 7;

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
		e[x] += e[y]; e[y] = x;
		return true;
	}
};

int32_t main(){
//setIO("");
ios_base::sync_with_stdio(false);
// freopen("error.txt", "w", stderr);
    cin.tie(NULL);
    cout.tie(NULL);
 int t=1; 
 cin>>t;
 while(t--){
 int n; cin>>n;
 vector <int> a(n) , b(n) , d(n);
 for (int i = 0 ; i < n; i++) cin >> a[i];
 for (int i = 0 ; i < n; i++) cin >> b[i];
 for (int i = 0 ; i < n; i++) cin >> d[i];
 DSU dsu(n+1);
 for (int i = 0; i < n; i++){
    dsu.unite(a[i], b[i]);
 }
 map <int ,int> m;
 int count = 0;
 for(int i=0; i<n ;i++){
   if(d[i] != 0) m[dsu.get(d[i])] = 1;
 }
 ll ans = 1;
 for( int i=1; i<=n;i++)
 {  
    if(a[i-1] == b[i-1]) continue;
    if(d[i-1] == 0  ){
        int key = dsu.get(a[i-1]);
        if(m[key] > 0) continue;
        else ans = (ans*2) % rem;
        m[key] = 1;

    }
    
 }
 cout << ans <<endl;


 }
cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s."<<endl;

    return 0;
}