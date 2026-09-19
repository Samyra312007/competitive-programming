#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    string S;
    string T;
    cin >> N;
    cin >> S;
    cin >> T;
    bool check = true;
    for (int i = 0; i < N; i++)
    {
        if (T[i] == '*')
            continue;
        else if (S[i] != T[i])
        {
            check = false;
            break;
        }
    }
    if (check == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}