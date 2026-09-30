#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int longestlength(string s)
{
    int n = s.length();
    int maxlen = 1;
    int len = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            len = 1;
        else
            len++;
        maxlen = max(len, maxlen);
    }
    return maxlen;
}

int main()
{
    string s;
    cin >> s;
    int out = longestlength(s);
    cout << out << endl;
    return 0;
}