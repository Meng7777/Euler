/*************************************************************************
	> File Name: EP24.cpp
	> Author: meng
	> Mail: 2206084014@qq.com
	> Created Time: 2019年06月25日 星期二 20时32分11秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
#define MAX_N 10
int fact[MAX_N + 5];
int num[MAX_N + 5];

void init(int n) {
    fact[0] = 1;
    num[0] = 1;
    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i;
        num[i] = 1;
    }
    return ;
}

int get_num(int k, int val, int n, int &x) {
    int step = k / val;
    x = 0;
    for (int t = 0; t <= step; x += (t <= step)) {
        t += num[x];
    }
    k %= val;
    num[x] = 0;
    return k;
}

int main() {
    init(MAX_N);
    int k = 1000000 -1;
    for (int i = MAX_N; i >= 1; i--) {
        int x;
        k = get_num(k, fact[i - 1], MAX_N, x);
        printf("%d", x);
    }
    printf("\n");
    return 0;
}
