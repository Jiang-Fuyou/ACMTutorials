/*
��һ��ר��Ϊ�˼����������Ƶġ�����ջ����������û�����һ����ʼΪ�յ�ջ������֧�����²�����
PUSH���ռ���{}����ջ
DUP���ѵ�ǰջ��Ԫ�ظ���һ�ݺ�����ջ
UNION����ջ�������ϣ�Ȼ������ߵĲ�����ջ
INTERSECT����ջ�������ϣ�Ȼ��Ѷ��ߵĽ�����ջ
ADD����ջ�������ϣ�Ȼ����ȳ�ջ�ļ��ϼ��뵽���ջ�ļ����У��ѽ����ջ
ÿ�β��������ջ�����ϵĴ�С����Ԫ�ظ�������
����ջ��Ԫ����A={ {}�� {{}} }�� ��һ��Ԫ����B={ {}�� {{{}}} }����
UNION�������õ�{ {}�� {{}}�� {{{}}} }�����3.
INTERSECT�������õ�{ {} }�����1
ADD�������õ�{ {}�� {{{}}}�� { {}�� {{}} } }�����3.
�����룺��������Դ����������������������������������
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
// ���Ҹ������ϵ�ID������Ҳ��������һ����ID
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
 