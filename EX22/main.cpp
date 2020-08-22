#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using namespace std;

bool sortbysecond(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second == p2.second) {
    return p1.first < p2.first;
  } else {
    return p1.second < p2.second;
  }
}

int main() {
  // N × (3 × 3)要素の配列を宣言
  /* vector<vector<vector<char>>> data(N, vector<vector<char>>(3, vector<char>(3))); */
  // int型の2次元配列(3×4要素の)の宣言
  /* vector<vector<int>> data(3, vector<int>(4)); */
  int N;
  cin >> N;
  vector<pair<int, int>> ary;
  int a, b;

  rep(i, N) {
    cin >> a >> b;
    ary.push_back(make_pair(a, b));
  }

  sort(ary.begin(), ary.end(), sortbysecond);
  for (auto p : ary) {
    cout << p.first << " " << p.second << endl;
  }
}
