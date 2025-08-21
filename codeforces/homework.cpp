#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n;
        cin >> n;
        string a;
        cin >> a;
        int m;
        cin >> m;
        string b;
        cin >> b;
        string c;
        cin >> c;
        for(int j = 0; j<m; j++){
            if(c[j] == 'D'){
                a.push_back(b[j]);
            }
            else{
                a.insert(a.begin(), b[j]);
            }
        }
        cout << a << endl;
    }
}
