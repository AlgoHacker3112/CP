#include <bits/stdc++.h>
#warning change ll
#define ll long long
const int N = 2e5 + 1;

using namespace std;

#ifdef DEBUG
#include <bits/debug.h> // replace with your path
#else
#define debug(x)
#endif

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t = 1;
  cin >> t;
  while (t--) {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    for (auto &c : a)
      cin >> c;

    vector<ll> pre(n + 1);
    for (int i = 1; i < n + 1; i++) pre[i] = pre[i - 1] + a[i - 1];
    debug(pre);

    map<ll, ll> mp;
    ll j = a[0];

    for (int i = 0; i < n; i++){
      if (j >= a[i])
        mp[j] = pre[i + 1];
      else {
        j = a[i];
        mp[j] = pre[i + 1];
      }
    }
    sort(begin(a), end(a));
    for (auto &c : b) {
      cin >> c;
    }
    for(int i=1 ;i<n;i++){
        if(mp[a[i]] == 0) mp[a[i]] = mp[a[i-1]]; 
    }
    for (int i = 0; i < m; i++) {
      ll k = b[i];

      if (a[n - 1] >= k ) {
        auto it = upper_bound(begin(a), end(a), k) - begin(a) - 1;
        if (it != -1) {
          cout << mp[a[it]] << " ";
        }
        else cout << 0 <<" ";
      } 
      else {
        cout << mp[a[n - 1]] << " ";
      }
    }
    debug(a);
    cout << endl;
  }
  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s." << endl;

  return 0;
}