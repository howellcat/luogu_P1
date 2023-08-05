#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    scanf("%d", &k);
    float sum = 0;
    int i = 1;
    for (; sum < k; i++)
        sum += 1.0 / i;
    printf("%d", i - 1);
}