#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int result = 1;
  rep(i, N) {
    if (result < K) {
      result *= 2;
    } else {
      result += K;
    }
  }

  cout << result << endl;
}
