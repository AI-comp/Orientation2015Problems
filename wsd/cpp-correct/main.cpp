#include <iostream>
#include <vector>
#include <string>
using namespace std;

int dx[] = { -1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
string target = "WSD";

int main() {
    int n, D;

    cin >> D;
    for ( int k = 0; k < D; k++ ) {
        cin >> n;
        vector<string> s ( n );

        for ( int i = 0; i < n; i++ ) {
            cin >> s[i];
        }

        int ans = 0;

        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                for ( int d = 0; d < 4; d++ ) {
                    bool ok = true;

                    for ( int l = 0; l < 3; l++ ) {
                        int x = i + dx[d] * l;
                        int y = j + dy[d] * l;

                        if ( x < 0 || y < 0 || x >= n || y >= n ) {
                            ok = false;
                            break;
                        }

                        if ( s[y][x] != target[l] ) {
                            ok = false;
                            break;
                        }
                    }

                    if ( ok ) {
                        ans++;
                    }
                }
            }
        }

        cout << ans << endl;
    }
}
