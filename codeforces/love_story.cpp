#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    string a = "codeforces";
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i] - a[i] != 0)
            ans++;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}