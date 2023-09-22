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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }
    long long count = 0;
    for (long long i = 1; i < v.size(); i++)
    {

        if (v[i - 1] > v[i])
        {
            count += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << count;
    return 0;
}