#include <iostream>
using namespace std;

int num[] = {1, 5, 9, 15, 25, 50, 86};
int val[] = {120, 360, 600, 960, 1600, 3000, 5000};

int main() {
    int n;

    while ( cin >> n, n ) {
        int ans = 0;

        while ( n ) {
            for ( int i = 6; i >= 0; i-- ) {
                if ( n >= num[i] ) {
                    ans += val[i];
                    n -= num[i];
                    break;
                }
            }
        }

        cout << ans << endl;
    }
}
