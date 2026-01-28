#include <bits/stdc++.h>
using namespace std;

void genSums(const vector<long long> &t, int ind, long long sum, vector<long long> &res)
{
    if (ind == (int)t.size())
    {
        res.push_back(sum);
        return;
    }
    genSums(t, ind + 1, sum + t[ind], res);
    genSums(t, ind + 1, sum, res);
}

int main()
{
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];

    int mid = n / 2;
    vector<long long> left(t.begin(), t.begin() + mid);
    vector<long long> right(t.begin() + mid, t.end());

    vector<long long> L, R;
    genSums(left, 0, 0, L);
    genSums(right, 0, 0, R);

    sort(R.begin(), R.end());

    long long ans = 0;
    for (long long s : L)
    {
        long long need = k - s;
        ans += upper_bound(R.begin(), R.end(), need) - lower_bound(R.begin(), R.end(), need);
    }

    cout << ans << endl;
    return 0;
}