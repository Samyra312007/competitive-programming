#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxi = 0;
    int rainy = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            rainy++;
            maxi = max(maxi, rainy);
        }
        else
        {
            maxi = max(maxi, rainy);
            rainy = 0;
        }
    }
    cout << maxi << endl;
    return 0;
}