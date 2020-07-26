#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<string>> ary(N, vector<string>(N, "-"));

  int w, l;
  rep(i, M) {
    cin >> w >> l;

    ary.at(w-1).at(l-1) = "o";
    ary.at(l-1).at(w-1) = "x";
  }
  rep(i, N) {
    rep(j, N) {
      cout << ary.at(i).at(j);
      if (j != (N-1)) {
        cout << " ";
      }
    }
    cout << endl;
  }
}
