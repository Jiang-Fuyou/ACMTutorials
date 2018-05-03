#include <iostream>
#include <string>   
#include <set>  
#include <sstream>

using namespace std;

set<string> dict;

int main()
{
    string s, buf;

    while (cin >> s) {
        //cout << s << endl;
        for (int i = 0; i < s.length(); i++) {
            //cout << s[i] << endl;
            if (isalpha(s[i])) {
                s[i] = tolower(s[i]);
            } else {
                s[i] = ' ';
            }
        }
        //cout << s << endl;
        //stringstream ss(s);
        //while (ss >> buf) {
        //    dict.insert(buf);
        //}
        dict.insert(s);
    }

    for (set<string>::iterator it = dict.begin(); it != dict.end(); ++it) {
        cout << *it << "\n";
    }

    return 0;
}