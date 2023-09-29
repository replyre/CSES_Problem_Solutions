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

    string s;
    cin >> s;
    unordered_map<char, int> mp;

    for (auto c : s)
        mp[c]++;
    int cnt = 0;
    char ch;
    for (auto x : mp)
    {
        if (x.second % 2)
        {
            cnt++;
            ch = x.first;
        }
    }

    if ((s.size() % 2 == 0 && cnt > 0) || cnt > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    string res = "";
    for (auto x : mp)
    {
        for (int i = 1; i <= x.second / 2; i++)
        {
            res += x.first;
        }
    }

    cout << res; // prints half of the values
    if (s.size() % 2)
        cout << ch; // prints the extra character
    reverse(res.begin(), res.end());
    cout << res;

    return 0;
}