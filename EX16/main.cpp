#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using namespace std;

int main() {
  int N = 5;
  vector<int> ary(N);
  rep (i, N) {
    cin >> ary.at(i);
  }
  int before = -1;
  string result = "NO";
  for (int x : ary) {
    if (before == x) {
      result = "YES";
      break;
    }
    before = x;
  }

  cout << result << endl;
}
