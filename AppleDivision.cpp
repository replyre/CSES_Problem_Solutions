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
    // int _t;cin>>_t; while(_t--)

    int n;
    cin >> n;
    ll total_sum = 0;
    int a[n];
    forn(i, n)
    {
        cin >> a[i];
        total_sum += a[i];
    }

    cout << endl;

    ll ans = INT_MAX;

    for (int i = 0; i < (1 << n); i++)
    {
        ll c = 0;

        for (int j = 0; j < n; j++)
        {
            if (1 << j & i)
            {
                c += a[j];
            }
        }

        ans = min(ans, abs(total_sum - c - c));
    }
    cout << ans;

    return 0;
}