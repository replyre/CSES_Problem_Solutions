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
    vi p;
    vi p1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            p.push_back(i);
        }
        else
        {
            p1.push_back(i);
        }
    }
    // sort(p.rbegin(), p.rend());
    if (n % 2 == 1)
    {
        sort(p.rbegin(), p.rend());
        sort(p1.rbegin(), p1.rend());
    }
    else
    {
        sort(p.begin(), p.end());
        sort(p1.begin(), p1.end());
    }
    p.insert(p.end(), p1.begin(), p1.end());
    for (int i = 1; i < n; i++)
    {
        if (abs(p[i] - p[i - 1]) == 1)
        {
            cout << "NO SOLUTION";
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {

        cout << p[i] << " ";
    }
    return 0;
}