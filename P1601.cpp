#include<bits/stdc++.h>

#define maxn 520

using namespace std;

int x[maxn], y[maxn], z[maxn];

int main() {
    string a, b;
    cin >> a >> b;
//================输入===============
    int len = max(a.length(), b.length());//len = 长度
    for (int i = a.length() - 1, j = 1; i >= 0; i--, j++)
        x[j] = a[i] - '0';//x 0判断
    for (int i = b.length() - 1, j = 1; i >= 0; i--, j++)
        y[j] = b[i] - '0';//y 0判断
//==============0判断=================
    for (int i = 1; i <= len; i++) {
        z[i] += x[i] + y[i];
//============各个数位相加============
        z[i + 1] = z[i] / 10;
        z[i] %= 10;
    }
//===========模拟进位================
    if (z[len + 1])
        len++;
//===========进位 -> 加位===========
    for (int i = len; i >= 1; i--)
        cout << z[i];
//===========打印各个数位==============
}