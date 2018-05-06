/*
有一个专门为了集合运算而设计的“集合栈”计算机。该机器有一个初始为空的栈，并且支持以下操作：
PUSH：空集“{}”入栈
DUP：把当前栈顶元素复制一份后再入栈
UNION：出栈两个集合，然后把两者的并集入栈
INTERSECT：出栈两个集合，然后把二者的交集入栈
ADD：出栈两个集合，然后把先出栈的集合加入到后出栈的集合中，把结果入栈
每次操作后，输出栈顶集合的大小（即元素个数）。
例如栈顶元素是A={ {}， {{}} }， 下一个元素是B={ {}， {{{}}} }，则：
UNION操作将得到{ {}， {{}}， {{{}}} }，输出3.
INTERSECT操作将得到{ {} }，输出1
ADD操作将得到{ {}， {{{}}}， { {}， {{}} } }，输出3.
（输入：先输入测试次数，再输入操作次数，再输入具体操作）
Sample Input
2
9
PUSH
DUP
ADD
PUSH
ADD
DUP
ADD
DUP
UNION
5
PUSH
PUSH
ADD
PUSH
INTERSECT

Sample Output
0
0
1
0
1
1
2
***
0
0
1
0
0

***

*/

#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

#define ALL(x) x.begin(),x.end()
#define INS(x) inserter(x,x.begin())

typedef set<int> Set;
map<Set, int> IDcache;
vector<Set> Setcache;

/*
// 查找给定集合的ID，如果找不到则分配一个新ID
int ID(Set x)
{
    if (IDcache.count) {

    }
}
*/


int main()
{
    int T;
    cin >> T;
    /*
    while (T--) {
        stack<int> s;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            string op;
            cin >> op;
            if (op[0] == 'P') {
                s.push();
            } else if (op[0] == 'D') {
                s.push();
            } else {

            }
        }
    }
    */

    return 0;
}
 