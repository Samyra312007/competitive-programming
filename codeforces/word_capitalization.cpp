#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string word;
    cin >> word;
    if (!word.empty())
    {
        word[0] = static_cast<char>(toupper(static_cast<unsigned char>(word[0])));
    }
    cout << word << endl;
    return 0;
}