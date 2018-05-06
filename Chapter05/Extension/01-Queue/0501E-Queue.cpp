#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(3);
    q.push(2);
    q.push(4);

    while (!q.empty()) {
        cout << "queue, front: " << q.front() << ", back: " << q.back() << endl;
        q.pop();
    }


    priority_queue<int, vector<int>, greater<int> > pq1;
    pq1.push(1);
    pq1.push(3);
    pq1.push(2);
    pq1.push(3);
    pq1.push(4);

    while (!pq1.empty()) {
        cout << "priority queue, top: " << pq1.top() << endl;
        pq1.pop();
    }

    priority_queue<int, vector<int>, less<int> > pq2;
    pq2.push(1);
    pq2.push(3);
    pq2.push(2);
    pq2.push(3);
    pq2.push(4);

    while (!pq2.empty()) {
        cout << "priority queue, top: " << pq2.top() << endl;
        pq2.pop();
    }

    return 0;
}