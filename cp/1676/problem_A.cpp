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
        int fsum = 0, lsum = 0;
        for (int j = 0; j < 3; j++)
        {
            fsum += s[j];
        }
        for (int j = 5; j >= 3; j--)
        {
            lsum += s[j];
        }
        if (fsum == lsum)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}