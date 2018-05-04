#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[5], b[5];
    
    for (a[0] = 0; a[0] <= 9; a[0]++)
    for (a[1] = 0; a[1] <= 9; a[1]++)
    for (a[2] = 0; a[2] <= 9; a[2]++)
    for (a[3] = 0; a[3] <= 9; a[3]++)
    for (a[4] = 0; a[4] <= 9; a[4]++) {
        
        bool a_is_different = true;

        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (a[i] == a[j]) {
                    a_is_different = false;
                    break;
                }
            }
            if (!a_is_different) {
                break;
            }
        }

        if (a_is_different) {
            int num = a[0] * 10000 + a[1] * 1000 + a[2] * 100 + a[3] * 10 + a[4];
            int mul = num * n;

            if (mul >= 100000) {
                continue;
            }

            b[0] = mul / 10000;
            b[1] = mul % 10000 / 1000;
            b[2] = mul % 1000 / 100;
            b[3] = mul % 100 / 10;
            b[4] = mul % 10;

            /*
            printf("mul: %d\n", mul);
            for (int i = 0; i < 5; i++) {
                printf("%d ", b[i]);
            }
            printf("\n");
            */

            bool is_different = true;
            for (int i = 0; i < 4; i++) {
                for (int j = i + 1; j < 5; j++) {
                    if (b[i] == b[j]) {
                        is_different = false;
                        break;
                    }
                }
                if (!is_different) {
                    break;
                }
            }
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (a[i] == b[j]) {
                        is_different = false;
                        break;
                    }
                }
                if (!is_different) {
                    break;
                }
            }

            if (is_different) {
                printf("%05d | %05d = %d\n", mul, num, n);
            }
        }
    }

    return 0;
}