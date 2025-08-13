#include <bits/stdc++.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        string xstr = to_string(x);
        int miny = INT_MAX;
        for (int j = 0; j < xstr.length(); j++)
        {
            int y = xstr[j] - '0';
            miny = min(y, miny);
        }
        cout << miny << endl;
    }
    return 0;
}