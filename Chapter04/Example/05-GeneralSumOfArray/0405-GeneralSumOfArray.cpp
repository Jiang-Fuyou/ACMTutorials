#include <stdio.h>

template<typename T>
T sum(T *begin, T *end)
{
    T sum(0);
    for (T *p = begin; p != end; p++) {
        sum += *p;
    }

    return sum;
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5 };
    double b[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    printf("sum of array a is: %d\n", sum<int>(a, a + 5));
    printf("sum of array b is: %lf\n", sum<double>(b, b + 5));

    return 0;
}