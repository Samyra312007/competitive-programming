#include <bits/stdc++.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    int x = 0;
    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin, s);
        if (s == "++X")
            ++x;
        else if (s == "--X")
            --x;
        else if (s == "X++")
            x++;
        else if (s == "X--")
            x--;
    }
    cout << x << endl;
    return 0;
}