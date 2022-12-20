#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t; // read the number of test cases

  while (t--) { // for each test case
    int n, m, k;
    cin >> n >> m >> k; // read n, m, and k

    int a[m]; // array to store the number of times each color must be used
    for (int i = 0; i < m; i++) {
      cin >> a[i];
    }

    sort(a, a + m); // sort the colors in ascending order

    bool possible = true; // flag to store whether it is possible to paint the cells
    for (int i = 0; i < m; i++) {
      if (a[i] > (k - (i % k))) { // if the number of times a color must be used is greater than the maximum allowed
        possible = false; // it is not possible to paint the cells
        break;
      }
    }

    if (possible) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
