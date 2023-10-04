#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, n) for (int i = 0; i < int(n); i++)

// freopen('input.txt', 'r', stdin);
// freopen('output.txt', 'w', stdout);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t;
    cin >> _t;
    while (_t--)
    {
        ll x, y;
        cin >> y >> x;

        if (y > x)
        {
            if (y % 2)
                cout << (y - 1) * (y - 1) + 1 + (x - 1);
            else
                cout << y * y - (x - 1);
        }
        else
        {
            if (x % 2)
                cout << x * x - (y - 1);
            else
                cout << (x - 1) * (x - 1) + 1 + (y - 1);
        }
        cout << endl;
    }

    return 0;
}