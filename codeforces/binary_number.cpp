#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string n;
    cin >> n;
    long long decn = stoll(n, nullptr, 2);
    long long cnt = 0;
    while (decn != 1)
    {
        if (decn % 2 == 0)
        {
            decn /= 2;
            cnt++;
        }
        else
        {
            decn += 1;
            cnt++;
        }
    }
    cout << cnt << endl;
}