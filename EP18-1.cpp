/*************************************************************************
	> File Name: EP18.cpp
	> Author: meng
	> Mail: 2206084014@qq.com
	> Created Time: 2019年06月25日 星期二 18时40分20秒
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
#define MAX_N 15
int val[MAX_N + 5][MAX_N + 5];
int keep[MAX_N + 5][MAX_N + 5];

int dfs(int i, int j, int n) {
    if (i + 1 == n) { return val[i][j]; }
    if (keep[i][j] != 0) return keep[i][j];
    int val1 = dfs(i + 1, j, n);
    int val2 = dfs(i + 1, j + 1, n);
    return (keep[i][j] = (val1 > val2 ? val1 : val2) + val[i][j]);
}

int main() {
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> val[i][j];
        }
    }
    cout << dfs(0, 0, MAX_N) << endl;
    return 0;
}
