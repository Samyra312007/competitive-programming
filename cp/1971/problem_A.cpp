#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        int mini = min(x, y), maxi = max(x, y);
        cout << mini << " " << maxi << endl;
    }
    return 0;
}