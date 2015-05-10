#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

typedef vector<char> VC;
typedef vector<VC> VVC;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
enum _direction {
  UP,
  RIGHT,
  DOWN,
  LEFT
};

int search(const VVC & field, char needle, int y, int x, int direction)
{
  if (!(0 <= y && y < field.size()) || !(0 <= x && x < field[0].size())) {
    return 0;
  }
  if (field[y][x] != needle) {
    return 0;
  }

  char targets[] = {'W', 'S', 'D'};
  int ti = needle == 'W' ? 1 : needle == 'S' ? 2 : 3;
  if (ti > 2) {
    return 1;
  }

  int ret = 0;
  ret += search(field, targets[ti], y + dy[direction], x + dx[direction], direction);
  return ret;
}

int main()
{
  int D; cin >> D;
  while (D--) {
    int N; cin >> N;
    VVC field(N, VC(N));
    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < N; ++j) {
        cin >> field[i][j];
      }
    }

    int ans = 0;
    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < N; ++j) {
        for (int d = 0; d < 4; ++d) {
          ans += search(field, 'W', i, j, d);
        }
      }
    }
    cout << ans << endl;
  }
}
