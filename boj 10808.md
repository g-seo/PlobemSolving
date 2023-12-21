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
#include <bits/stdc++.h>
using namespace std;

int freq[26];
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  for(auto c : s)
    freq[c-'a']++;
  for(int i = 0; i < 26; i++)
    cout << freq[i] << ' ';
}
*/
