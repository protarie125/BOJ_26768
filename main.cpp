#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> s;
  for (auto&& x : s) {
    if ('a' == x) {
      x = '4';
    }

    if ('e' == x) {
      x = '3';
    }

    if ('i' == x) {
      x = '1';
    }

    if ('o' == x) {
      x = '0';
    }

    if ('s' == x) {
      x = '5';
    }
  }
  cout << s;

  return 0;
}