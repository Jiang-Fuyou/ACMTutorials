#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 100 + 10;
int A[maxn];

int main()
{
	long long a, b;
	while (cin >> a >> b) {
		cout << "Min(a, b) = " << min(a, b) << endl;
	}

	return 0;
}