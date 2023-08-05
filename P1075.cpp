#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    bool t[1001];
    for (int i = 0; i < 1001; i++)
        t[i] = false;
    for (int i = 0; i < 1001; i++) {
        int x;
        scanf("%d", &x);
        t[x] = true;
    }
    int s = 0;
    for (int i = 0; i < 1001; i++)
        if (t[i])
            s++;
    printf("%d\n", s);
    for (int i = 0; i < 1001; i++)
        if (t[i])
            printf("%d ", i);
}