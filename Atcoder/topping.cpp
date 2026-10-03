#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;
    vector<int> w;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        w.push_back(elem);
    }
    int happiness = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((i + j + k) + 3 <= v)
                {
                    happiness = max(happiness, w[i] + w[j] + w[k]);
                }
            }
        }
    }
    cout << happiness << endl;
    return 0;
}