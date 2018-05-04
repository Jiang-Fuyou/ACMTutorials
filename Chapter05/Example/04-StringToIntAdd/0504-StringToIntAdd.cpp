#include <string>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string line;
	while (getline(cin, line)) {
		int sum = 0;
		int x;
		stringstream ss(line);
		while (ss >> x) {
			sum += x;
		}

		cout << "Sum is: " << sum << endl;
	}
	
	return 0;
}