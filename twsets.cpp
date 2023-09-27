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
    ll n;
    cin >> n;
    ll sum = (n) * (n + 1) / 2;
    if (sum % 2 == 0)
    {
        cout << "YES\n";
        ll mid = sum / 2;
        vector<ll> set1;
        vector<ll> set2;
        for (int i = n; i >= 1; i--)
        {
            if (i <= mid)
            {
                set1.push_back(i);
                mid = mid - i;
            }
            else
            {
                set2.push_back(i);
            }
        }

        cout << set1.size() << endl;
        for (auto s : set1)
        {
            cout << s << " ";
        }
        cout << endl;
        cout << set2.size() << endl;
        for (auto s : set2)
        {
            cout << s << " ";
        }
    }

    else
    {
        cout << "NO";
    }
    return 0;
}