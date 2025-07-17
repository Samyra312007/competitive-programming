#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        if (s == "YES" || s == "YEs" || s == "Yes" || s == "yes" || s == "yEs" || s == "yES" || s == "yeS" || s == "YeS")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}