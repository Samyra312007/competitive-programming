#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> grapes;
    for (int i = 0; i < n; i++)
    {
        int elem = m / n;
        grapes.push_back(elem);
    }
    if (m % n != 0)
    {
        m = m % n;
        int i = 0;
        while (i < n && m != 0)
        {
            grapes[i]++;
            i++;
            m--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << grapes[i] << endl;
    }
    return 0;
}