#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[7];
    for (int i = 0; i < 7; i++) {
        int x1, x2;
        scanf("%d%d", &x1, &x2);
        a[i] = x1 + x2;
    }
    int sum = -1;
    for (int i = 0; i < 7; i++)
        if (a[i] > a[sum] && a[i] > 8)
            sum = i;
    printf("%d", sum + 1);
}