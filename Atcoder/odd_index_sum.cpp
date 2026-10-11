#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a;
  for(int i = 0; i<n; i++){
    int elem;
    cin >> elem;
    a.push_back(elem);
  }
  int summ = 0;
  for(int i = 0; i<n; i++){
    if((i+1)%2 != 0){
      summ += a[i];
    }
  }
  cout << summ << endl;
  return 0;
}