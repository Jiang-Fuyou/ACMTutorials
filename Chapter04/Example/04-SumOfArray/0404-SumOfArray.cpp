#include <stdio.h>

int sum(int a[], const int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    printf("sum is %d\n", sum(a, 1));
    printf("sum is %d\n", sum(a, 2));
    printf("sum is %d\n", sum(a, 3));
    printf("sum is %d\n", sum(a, 4));
    printf("sum is %d\n", sum(a, 5));
    printf("sum is %d\n", sum(a, 6));
    printf("sum is %d\n", sum(a, 7));
    printf("sum is %d\n", sum(a, 8));
    printf("sum is %d\n", sum(a + 2, 2));

    return 0;
}