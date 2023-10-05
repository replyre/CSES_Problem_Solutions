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
    int q;
    cin >> q;
    vector<ll> power10(19, 1);
    for (int i = 1; i < 19; i++)
    {
        power10[i] = power10[i - 1] * 10;
    }
    while (q--)
    {
        ll index;
        cin >> index;
        ll digitsSoFar = 0;
        ll digitsBeforeActualBlock = 0;
        int noOfDigits = 0;

        for (int i = 1; i <= 18; i++)
        {
            digitsSoFar += (power10[i] - power10[i - 1]) * i;
            if (digitsSoFar >= index)
            {
                noOfDigits = i;
                break;
            }
            digitsBeforeActualBlock += (power10[i] - power10[i - 1]) * i;
        }
        ll smallest = power10[noOfDigits - 1];
        ll largest = power10[noOfDigits] - 1;
        ll bestValue = 0;
        ll startpos_BestVal = 0;
        while (smallest <= largest)
        {
            ll actualVal = (smallest + largest) / 2;
            ll startpos_ActualVal = digitsBeforeActualBlock + 1 + (actualVal - power10[noOfDigits - 1]) * noOfDigits;
            if (startpos_ActualVal <= index)
            {
                if (actualVal > bestValue)
                {
                    bestValue = actualVal;
                    startpos_BestVal = startpos_ActualVal;
                }
                smallest = actualVal + 1;
            }
            else
                largest = actualVal - 1;
        }
        string ans = to_string(bestValue);
        cout << ans[index - startpos_BestVal] << endl;
    }
    return 0;
}