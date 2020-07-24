#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using namespace std;

int main() {
  string S;
  cin >> S;

  int ttl = 1;
  rep (i, S.size()) {
    if (i % 2 != 0) {
      if (S.at(i) == '+') {
        ttl += 1;
      } else if (S.at(i) == '-') {
        ttl -= 1;
      }
    }
  }
  cout << ttl << endl;
}
