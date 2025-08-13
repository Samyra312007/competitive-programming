#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for (int j = 0; j < n; j++)
        {
            cin >> x[j];
        }
        int miny = min(abs(s - x[0]), abs(s - x.back())) + x.back() - x[0];
        cout << miny << endl;
    }
    return 0;
}