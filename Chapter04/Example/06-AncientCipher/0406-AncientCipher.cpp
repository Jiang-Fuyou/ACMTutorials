#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int a1[26], a2[26];
    for (int i = 0; i < 26; i++) {
        a1[i] = 0;
        a2[i] = 0;
    }

    for (int i = 0; i < s1.size(); i++) {
        a1[s1[i] - 65] ++;
    }
    for (int i = 0; i < s2.size(); i++) {
        a2[s2[i] - 65] ++;
    }

    sort(a1, a1 + 26);
    sort(a2, a2 + 26);

    bool is_same = true;
    for (int i = 0; i < 26; i++) {
        if (a1[i] != a2[i]) {
            is_same = false;
        }
    }

    if (is_same) {
        cout << "YES" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}