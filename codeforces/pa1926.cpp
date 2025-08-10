#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int cnt_a = 0, cnt_b = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'A')
            {
                cnt_a++;
            }
            else
            {
                cnt_b++;
            }
        }
        if (cnt_a > cnt_b)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
    return 0;
}