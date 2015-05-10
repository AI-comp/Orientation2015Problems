#include <iostream>
using namespace std;

int main() {
    int n, t, d;

    cin >> d;
    for ( int j = 0; j < d; j++) {
        cin >> n >> t;
        int m;
        cin >> m;

        for ( int i = 0; i < m; i++ ) {
            int c;
            cin >> c;
            int ans = ( t % n + c ) % n;
            cout << ( i == 0 ? "" : " " ) << ans;
        }

        cout << endl;
    }
}
