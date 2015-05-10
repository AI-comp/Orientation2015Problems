#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int num[] = {1, 5, 9, 15, 25, 50, 86};
int val[] = {120, 360, 600, 960, 1600, 3000, 5000};

int main() {
    vector<int> dp ( 1001, INT_MAX );
    dp[0] = 0;

    for ( int i = 0; i < 1000; i++ ) {
        for ( int j = 0; j < 7; j++ ) {
            int k = i + num[j];

            if ( k <= 1000 ) {
                dp[k] = min ( dp[k], dp[i] + val[j] );
            }
        }
    }

    int n, d;

    cin >> d;
    while ( cin >> n, d-- ) {
        cout << dp[n] << endl;
    }
}
