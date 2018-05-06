#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    set<string> dict;
    set<int> collect;

    string s1 = "my name is chiangyung";
    string s2 = "what is your name";
    stringstream ss;
    string output;

    ss << s1 << " " << s2;
    while (ss >> output) {
        cout << "output: " << output 
             << ", count: " << dict.count(output) << endl;
        dict.insert(output);
    }
    ss.clear();

    for (set<string>::iterator it = dict.begin(); it != dict.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}