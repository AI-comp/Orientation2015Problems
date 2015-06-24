#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N; cin >> N;
  while (N--) {
    int cnt; cin >> cnt;
    string T; cin >> T;
    int len = T.length();
    for (int i = 0; i < len && cnt > 0; ++i) {
      if (T[i] == 'w') {
        cnt += 3;
      } else {
        cnt /= 2;
      }
    }
    cout << cnt << endl;
  }
}
