#include<iostream>
#include<string>

using namespace std;

int main(){
  string S;
  cin >> S;
  int n = S.length();
  string T = S;
  if(S[n-1] == 'e'){
    T.push_back('r');
  }
  else{
    T += "er";
  }
  cout << T << endl;
  return 0;
}