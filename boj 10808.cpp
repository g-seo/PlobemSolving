#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int cnt_list[26] = {0, };
    
    for (int i = 0; i != s.size(); ++i) {
        cnt_list[s.at(i) - 97]++;
    }
    
    for (int i = 0; i != 26; ++i) {
        cout << cnt_list[i] << ' ';
    }
}

//Better Answer
/*
