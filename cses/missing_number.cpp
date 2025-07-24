#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> arr;
    for (int i = 0; i < n - 1; i++)
    {
        long long int elem;
        cin >> elem;
        arr.push_back(elem);
    }
    long long int sum = (n * (n + 1)) / 2;
    long long int summ = 0;
    for (long long int j = 0; j < n - 1; j++)
    {
        summ += arr[j];
    }
    long long int missing = sum - summ;
    cout << missing << endl;
    return 0;
}