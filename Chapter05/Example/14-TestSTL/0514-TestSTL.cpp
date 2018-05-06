#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>
using namespace std;

void fill_random_int(vector<int> &arr, const int cnt)
{
    arr.clear();
    for (int i = 0; i < cnt; i++) {
        arr.push_back(rand());
    }
}

void test_sort(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++) {
        assert(arr[i] <= arr[i + 1]);
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    const int N = 1000000;
    vector<int> arr;

    fill_random_int(arr, N);
    test_sort(arr);

    return 0;
}