#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    map<char, int> x;
    for (size_t i = 0; i < s.size(); i++) {
        if (isalnum(s[i]) || isalpha(s[i])) {
            x[s[i]]++;
        }
    }

    for (const auto& i : x) {
        cout << i.first << "    " << i.second << endl;
    }
}