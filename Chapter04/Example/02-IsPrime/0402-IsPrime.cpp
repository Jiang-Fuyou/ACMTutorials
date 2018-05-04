#include <cstdio>
#include <cmath>

bool is_prime(int n)
{
    if (n <= 1) return false;
    int m = floor(sqrt(n) + 0.5);
    for (int i = 2; i <= m; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    for (int i = 0; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%d is a prime number.\n", i);
        } else {
            printf("%d is not a prime number.\n", i);
        }
    }

    return 0;
}