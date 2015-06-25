#include <iostream>
using namespace std;

int main() {
    int b, n, d;

    cin >> d;
    for ( int i = 0; i < d; i++ ) {
        cin >> b >> n;
        string ans;

        while ( n ) {
            char c;

            if ( n % b < 10 ) {
                c = '0' + n % b;
            } else {
                c = 'A' + n % b - 10;
            }

            ans = c + ans;
            n /= b;
        }

        cout << ans << endl;
    }
}
