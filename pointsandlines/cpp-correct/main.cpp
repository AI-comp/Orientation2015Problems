#include <iostream>
#include <vector>
using namespace std;

bool same_fraction ( int a, int b, int c, int d ) {
    return a * d == b * c;
}

int main() {
    int n, d;

    cin >> d;
    while ( cin >> n, d-- ) {
        vector<int> x ( n ), y ( n );

        for ( int i = 0; i < n; i++ ) {
            cin >> x[i] >> y[i];
        }

        int ans = 0;

        for ( int i = 0; i < n; i++ ) {
            for ( int j = i + 1; j < n; j++ ) {
                int cnt = 0;

                for ( int k = 0; k < n; k++ ) {
                    if ( same_fraction ( x[j] - x[i], y[j] - y[i], x[k] - x[i], y[k] - y[i] ) ) {
                        cnt++;
                    }
                }

                ans = max ( ans, cnt );
            }
        }

        cout << ans << endl;
    }
}
