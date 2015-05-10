#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N; cin >> N;
  while (N--) {
    string T; cin >> T;
    int n = 1, len = T.length();
    for (int i = 0; i < len && n > 0; ++i) {
      if (T[i] == 'w') {
        n += 3;
      } else {
        n /= 2;
      }
    }
    cout << n << endl;
  }
}
