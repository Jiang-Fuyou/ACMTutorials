#include <iostream>
using namespace std;

template <typename T>
struct Point
{
    T x, y;
    Point(T x = 0, T y = 0) : x(x), y(y) {}
    
    Point &operator += (const Point &p)
    {
        x += p.x;
        y += p.y;
        return *this;
    }
};

template <typename T>
Point<T> operator + (const Point<T> &A, const Point<T> &B)
{
    return Point<T>(A.x + B.x, A.y + B.y);
}

template <typename T>
ostream &operator << (ostream &out, const Point<T> &p)
{
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

template<typename T>
T sum(T *begin, T *end)
{
	T ans = 0;

	for (T *p = begin; p != end; p++) {
		ans += *p;
	}

	return ans;
}

int main()
{   
	int    a[] = { 1, 2, 3, 4, 5 };
	double b[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    Point<int> c[] = { Point<int>(1, 1), 
                       Point<int>(2, 2), 
                       Point<int>(3, 3), 
                       Point<int>(4, 4), 
                       Point<int>(5, 5) };
    Point<double> d[] = { Point<double>(1.1, 1.1),
                          Point<double>(2.2, 2.2),
                          Point<double>(3.3, 3.3),
                          Point<double>(4.4, 4.4),
                          Point<double>(5.5, 5.5) };


    // +5, not +4
	int    sum_a = sum<int>(a, a + 5);
	double sum_b = sum<double>(b, b + 5);
    Point<int> sum_c = sum<Point<int>>(c, c + 5);
    Point<double> sum_d = sum<Point<double>>(d, d + 5);

    for (int i = 0; i < 5; i++) {
        //cout << c[i] << endl;
    }

	cout << "sum of array a is: " << sum_a << endl;
	cout << "sum of array b is: " << sum_b << endl;
    cout << "sum of array c is: " << sum_c << endl;
    cout << "sum of array d is: " << sum_d << endl;

	return 0;
}