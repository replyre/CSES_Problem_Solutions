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

ll power(ll b, ll e, ll mod)
{
    ll ans = 1;
    for (ll i = 0; i < e; i++)
    {
        ans = (ans * b) % mod;
    }
    return ans;
}
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
    ll mod = 1000000007;
    cout << power(2, n, mod);

    return 0;
}