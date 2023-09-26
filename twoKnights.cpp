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
#define forn(i, n) for (ll i = 1; i <= int(n); i++)

// freopen('input.txt', 'r', stdin);
// freopen('output.txt', 'w', stdout);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int _t;cin>>_t; while(_t--)
    ll n, total_comb, attack_pos;
    cin >> n;
    forn(i, n)
    {
        total_comb = (i * i) * ((i * i) - 1) / 2;
        attack_pos = 4 * (i - 1) * (i - 2);
        cout << total_comb - attack_pos << endl;
        ;
    }

    return 0;
}