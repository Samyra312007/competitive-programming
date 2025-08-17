#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n, m;
        cin >> n >> m;
        if((n+m)%2 == 0) cout << "Tonya" << endl;
        else cout << "Burenka" << endl;
    }
    return 0;
}