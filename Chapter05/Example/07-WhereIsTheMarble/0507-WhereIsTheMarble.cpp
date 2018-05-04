#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 10000;

int main()
{
    //freopen("C://User\Jiang Yong\Desktop\input.txt", "r", stdin);

    int a[maxn];
    int n, q, x, kase = 0;

    while (scanf("%d%d", &n, &q) == 2 && n) {
        printf("CASE# %d", kase++);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            sort(a, a + n);
            while (q--) {
                scanf("%d", &x);
                int p = lower_bound(a, a + n, x) - a;
                if (a[p] == x) {
                    printf("%d found at %d\n", x, p + 1);
                } else {
                    printf("%d not found\n", x);
                }
            }
        }
    }
       
    return 0;
}