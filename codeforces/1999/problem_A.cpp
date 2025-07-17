#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int l, f;
        l = n % 10;
        f = n / 10;
        cout << l + f << endl;
    }
    return 0;
}