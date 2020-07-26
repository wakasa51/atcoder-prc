#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> ap(N);
  vector<int> pi(N);
  rep(i, N) {
    cin >> ap.at(i);
  }
  rep(j, N) {
    cin >> pi.at(j);
  }

  int ttl = 0;
  rep(i, N) {
    rep(j, N) {
      if (S == (ap.at(i) + pi.at(j))) {
        ttl += 1;
      }
    }
  }

  cout << ttl << endl;
}
