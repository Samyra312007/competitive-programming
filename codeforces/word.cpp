#include<bits/stdc++.h>
#include<string>
#include<iostream>

using namespace std;


int main(){
    string s;
    getline(cin, s);
    int lcnt = 0;
    int ucnt = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i]>= 'a' && s[i]<= 'z') lcnt++;
        else ucnt++;
    }
    if(lcnt >= ucnt){
        for(auto&x : s){
            x = tolower(x);
        }
    }
    else{
        for(auto&x : s){
            x = toupper(x);
        }
    }
    cout << s << endl;
    return 0;
}