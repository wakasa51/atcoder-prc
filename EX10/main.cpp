#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  cout << "A:";
  rep(i, A) {
    cout << "]";
  }
  cout << endl;

  cout << "B:";
  rep(i, B) {
    cout << "]";
  }
  cout << endl;
}
