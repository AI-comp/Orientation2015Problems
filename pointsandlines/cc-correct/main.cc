#include <iostream>
#include <vector>
#include <set>
#include <cassert>
#include <algorithm>
using namespace std;

typedef pair<int, int> Point;

int gcd(int a, int b)
{
  if (a < b) {
    swap(a, b);
  }
  if (b == 0) { return 0; }

  while (a % b) {
    int rem = a % b;
    a = b;
    b = rem;
  }
  return b;
}

int main()
{
  int D; cin >> D;
  while (D--) {
    int N; cin >> N;
    set<Point> points;
    for (int i = 0; i < N; ++i) {
      int x, y; cin >> x >> y;
      Point p(y, x);
      points.insert(p);
    }
    int ans = 0;
    for(set<Point>::iterator i = points.begin(); i != points.end(); ++i) {
      for(set<Point>::iterator j = i; j != points.end(); ++j) {
        if (i == j) { continue; }

        Point pa = *i, pb = *j;
        if (pa.second > pb.second) {
          // pa should be left
          swap(pa, pb);
        }

        int dy = abs(pa.first - pb.second);
        int dx = abs(pa.second - pb.second);
        int sy = (pb.first - pa.first) < 0 ? -1 : 1;
        int sx = (pb.second - pa.second) < 0 ? -1 : 1;
        assert(sx == 1);
        int cd = gcd(dy, dx);
        if (cd == 0) {
          // either dx or dy is zero, so increment non-zero delta by one
          cd = 1;
        }

        Point pt = pa;
        int y = pt.first;
        int x = pt.second;
        while (-100 <= y && y <= 100 && -100 <= x && x <= 100) {
          x -= sx * dx * cd;
          y -= sy * dy * cd;
        }
        x += sx * dx * cd;
        y += sy * dy * cd;

        int cnt = 0;
        while (-100 <= y && y <= 100 && -100 <= x && x <= 100) {
          if (points.find(Point(y, x)) != points.end()) {
            cnt++;
          }
          x += sx * dx * cd;
          y += sy * dy * cd;
        }
        ans = max(ans, cnt);
      }
    }
    cout << ans << endl;
  }
}
