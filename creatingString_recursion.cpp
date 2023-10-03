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
set<string> ans;
void permutation(string s, int l, int h)
{
    if (l == h)
        ans.insert(s);
    else
    {
        for (int i = l; i <= h; i++)
        {
            swap(s[l], s[i]);
            permutation(s, l + 1, h);
            swap(s[l], s[i]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string q;
    cin >> q;
    permutation(q, 0, q.size() - 1);

    cout << ans.size() << endl;

    for (auto s : ans)
    {
        cout << s << endl;
    }

    return 0;
}