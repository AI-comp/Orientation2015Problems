#include <iostream>
using namespace std;

int table[15][15] = {
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 0},
    {2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {2, 2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
    {2, 2, 2, 0, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 0},
    {2, 2, 2, 2, 0, 1, 1, 1, 1, 2, 2, 1, 1, 1, 0},
    {2, 2, 2, 2, 2, 0, 1, 1, 1, 2, 2, 1, 1, 1, 0},
    {2, 2, 2, 2, 2, 2, 0, 1, 1, 2, 2, 1, 1, 1, 0},
    {2, 2, 2, 2, 2, 2, 2, 0, 1, 2, 2, 1, 1, 1, 0},
    {2, 2, 2, 2, 2, 2, 2, 2, 0, 2, 2, 1, 1, 1, 0},
    {2, 2, 2, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
    {2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 0, 1, 2, 1, 0},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 1, 1, 0},
    {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 0, 1, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0},
};
string name[15] = {
    "GEN", "LTG", "MJG", "COL", "LTC", "MAJ", "CPT", "1LT", "2LT", "PLA", "TNK", "CAV", "ENG", "SPY", "MIN",
};

int get_index ( string n ) {
    for ( int i = 0; i < 15; i++ ) {
        if ( name[i] == n ) {
            return i;
        }
    }
}

int main() {
    int n;
    cin >> n;

    for ( int i = 0; i < n; i++ ) {
        string f, e;
        cin >> f >> e;
        int fi = get_index ( f );
        int ei = get_index ( e );
        int res = table[fi][ei];

        switch ( res ) {
        case 0:
            cout << "DRAW" << endl;
            break;

        case 1:
            cout << "FRIEND" << endl;
            break;

        case 2:
            cout << "ENEMY" << endl;
            break;
        }
    }
}
