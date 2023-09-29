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
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        if (a * 2 < b)
            cout << "NO" << endl;
        else
        {
            a %= 3;
            b %= 3;
            if (a > b)
                swap(a, b);
            if ((a == 0 && b == 0) || (a == 1 && b == 2))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}