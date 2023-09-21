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
    vi v;
    map<int, int> mp;
    for (int i = 0; i < _t; i++)
    {
        int x;
        cin >> x;
        v.PB(x);
    }

    for (int i = 0; i < _t; i++)
    {
        mp[v[i]]++;
    }

    for (int i = 1; i <= _t; i++)
    {
        if (mp[i] == 0)
            cout << i;
    }

    return 0;
}