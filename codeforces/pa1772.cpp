#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        char op;
        cin >> a >> op >> b;
        cout << a + b << endl;
    }
    return 0;
}