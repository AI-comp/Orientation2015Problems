#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

char i2c(int n)
{
  assert(0 <= n && n <= 31);
  if (n < 10) {
    return '0' + n;
  } else {
    return 'A' + (n - 10);
  }
}

string i2base_n(int base, int n)
{
  assert(2 <= base && base <= 32);
  int divisor = 1;
  while (divisor * base <= n) {
    divisor *= base;
  }

  string ans = "";
  while (n) {
    int quot = n / divisor;
    ans += i2c(quot);
    n -= divisor * quot;
    divisor /= base;
  }

  return ans;
}

int main()
{
  int N; cin >> N;

  while (N--) {
    int B, T; cin >> B >> T;
    cout << i2base_n(B, T) << endl;
  }
}
