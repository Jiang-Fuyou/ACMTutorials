#include <iostream>
using namespace std;

/*
long long factorial(int n)
{
    long long m = 1;
    for (int i = 1; i <= n; i++) {
        m *= i;
    }
    return m;
}

long long combination(int n, int m)
{
    return factorial(n) / factorial(m) / factorial(n - m);
}
*/

long long combination(int n, int m)
{
    if (m < n - m) {
        m = n - m;
    }

    long long ans = 1;
    for (int i = m + 1; i <= n; i++) {
        ans *= i;
    }
    for (int i = 1; i <= n - m; i++) {
        ans /= i;
    }

    return ans;
}


int main()
{
    for (int i = 3; i < 25; i++) {
        cout << combination(i, 2) << endl;
    }
}