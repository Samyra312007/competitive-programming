#include <iostream>
using namespace std;

// total jo ordered pairs honge wo iss format banenge jo a = n - b ki condition ko satisfy karenge. (1, n-1), (2, n-2), (3, n-3), ...


int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << n - 1 << endl;
    }
    return 0;
}