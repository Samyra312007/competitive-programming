#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        if (n >= m)
        {
            if (n == m)
            {
                cout << "Yes" << endl;
            }
            else if ((n - m) % 2 == 0)
            {
                cout << "Yes" << endl;
            }
            else if ((n - m) % 2 != 0)
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}