#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  string op;
  int value;

  rep(i, N) {
    cin >> op >> value;

    if (op == "+") {
      A += value;
    } else if (op == "-") {
      A -= value;
    } else if (op == "*") {
      A *= value;
    } else if (op == "/") {
      if (value == 0) {
        cout << "error" << endl;
        break;
      } else {
        A /= value;
      }
    }
    cout << i + 1 << ":" << A << endl;
  }
}
