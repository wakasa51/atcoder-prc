#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> vec;
  int input;
  int ttl = 0;
  rep (i, N) {
    cin >> input;
    ttl += input;
    vec.push_back(input);
  }
  int avg = ttl / N;
  rep (i, N) {
    cout << abs(avg - vec.at(i)) << endl;
  }
}
