#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    map<int, int> mpp;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        mpp[x]++;
    }
    if(mpp.size() >= 3){
        cout << "No" << endl;
        return;
    }
    else{
        if(abs(mpp.begin()->second - mpp.rbegin()->second) <= 1){
            cout << "Yes" << endl;
            return;
        }
        else{
            cout << "No" << endl;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}