#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
using namespace std;

const int maxn = 30;
int n;
vector<int> pile[maxn];

void find_block(const int block, int &p, unsigned int &h)
{
    /*
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < pile[i].size(); j++) {
            if (pile[i][j] == block) {
                p = i;
                h = j;
            }
        }
    }
    */
    for (p = 0; p < n; p++) {
        for (h = 0; h < pile[p].size(); h++) {
            if (pile[p][h] == block) {
                return;
            }
        }
    }
}

void clear_above(const int p, const int h)
{
    for (unsigned int i = h + 1; i < pile[p].size(); i++) {
        int b = pile[p][i];
        pile[b].push_back(b);
    }
    pile[p].resize(h + 1);
}

void pile_onto(int p, int h, int p2)
{
    for (unsigned int i = h; i < pile[p].size(); i++) {
        pile[p2].push_back(pile[p][i]);
    }
    pile[p].resize(h);
}

void print()
{
    for (int i = 0; i < n; i++) {
        printf("%d:", i);
        for (unsigned int j = 0; j < pile[i].size(); j++) {
            printf(" %d", pile[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a, b;
    string s1, s2;

    cin >> n;
    for (int i = 0; i < n; i++) {
        pile[i].push_back(i);
    }

    while (cin >> s1) {
        if (s1 == "quit") break;
        cin >> a >> s2 >> b;

        int pa, pb;
        unsigned int ha, hb;

        find_block(a, pa, ha);
        find_block(b, pb, hb);

        if (pa == pb) continue;
        if (s2 == "onto") clear_above(pb, hb);
        if (s1 == "move") clear_above(pa, ha);
        pile_onto(pa, ha, pb);
    }
    print();

    return 0;
}