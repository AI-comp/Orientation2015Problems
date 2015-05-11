#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

typedef unsigned long long ULL;

char i2c(int n)
{
  assert(0 <= n && n <= 31);
  if (n < 10) {
    return '0' + n;
  } else {
    return 'A' + (n - 10);
  }
}

string i2base_n(int base, ULL n)
{
  assert(2 <= base && base <= 32);
  ULL divisor = 1;
  while (divisor * base <= n) {
    divisor *= base;
    // cerr << "divisor: " << divisor << endl;
  }
  // cerr << "base: " << base << endl;
  // cerr << "n: " << n << endl;

  string ans = "";
  while (n) {
    // cerr << "divisor: " << divisor << endl;
    ULL quot = n / divisor;
    ans += i2c(quot);
    n -= divisor * quot;
    divisor /= base;
  }
  while (divisor) {
    ans += '0';
    divisor /= base;
  }

  return ans;
}

int main()
{
  int N; cin >> N;

  while (N--) {
    ULL B, T; cin >> B >> T;
    cout << i2base_n(B, T) << endl;
  }
}
