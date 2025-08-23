#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string res = "";
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '1' && s2[i] == '0' || s1[i] == '0' && s2[i] == '1')
            res = res + '1';
        else
            res = res + '0';
    }
    cout << res << endl;
    return 0;
}
