#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N; cin >> N;
  while (N--) {
    int M; cin >> M;
    vector<int> R(M);
    vector<int> B(M);
    for (int i = 0; i < M; ++i) {
      cin >> R[i];
    }
    for (int i = 0; i < M; ++i) {
      cin >> B[i];
    }

    int r_win = 0, b_win = 0;
    for (int i = 0; i < M; ++i) {
      if (R[i] > B[i]) {
        r_win++;
      } else if (B[i] > R[i]) {
        b_win++;
      }
    }

    if (r_win > b_win) {
      cout << "RED" << endl;
    } else if (b_win > r_win) {
      cout << "BLUE" << endl;
    } else {
      cout << "DRAW" << endl;
    }
  }
}
