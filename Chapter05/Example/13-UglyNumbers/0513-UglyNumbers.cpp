#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <functional>
using namespace std;

typedef long long LL;
const int coeff[3] = { 2, 3, 5 };

int main()
{
    priority_queue<LL, vector<LL>, greater<LL> > pq;
    set<LL> s;
    pq.push(1);
    s.insert(1);

    for (int i = 1; ; i++) {
        LL x = pq.top();
        pq.pop(); // 把最小的数字pop出去
        //cout << "empty: " << pq.empty() << endl;
        cout << "i: " << i << ", x: " << x << endl;
        if (i == 10) {
            cout << "The " << i << "'th ugly number is " << x << endl;
            break;
        }
        for (int j = 0; j < 3; j++) {
            LL x2 = x * coeff[j];
            if (!s.count(x2)) {
                s.insert(x2);
                pq.push(x2);
                cout << "i: " << i << ", x2: " << x2 << endl;
            }
        }
    }

    for (set<LL>::iterator it = s.begin(); it != s.end(); ++it) {
        cout << *it << endl;
    }


    return 0;
}