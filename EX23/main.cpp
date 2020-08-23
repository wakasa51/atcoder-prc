#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

using namespace std;

int main() {
  // N × (3 × 3)要素の配列を宣言
  /* vector<vector<vector<char>>> data(N, vector<vector<char>>(3, vector<char>(3))); */
  // int型の2次元配列(3×4要素の)の宣言
  /* vector<vector<int>> data(3, vector<int>(4)); */
  int N;
  cin >> N;
  map<int, int> m;
  int tmp;

  rep(i, N) {
    cin >> tmp;
    m[tmp]++;
  }

  int key = 0, value = 0;
  for(auto p : m) {
    if (value < p.second) {
      key = p.first;
      value = p.second;
    }
  }

  cout << key << " " << value << endl;
}
