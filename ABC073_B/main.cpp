#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using namespace std;

int main() {
  int N;

  cin >> N;
  int l, r;
  int ttl = 0;
  rep(i, N) {
    cin >> l >> r;
    ttl += r - l + 1;
  }
  cout << ttl << endl;
}
