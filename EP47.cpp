/*************************************************************************
	> File Name: EP47.cpp
	> Author: meng
	> Mail: 2206084014@qq.com
	> Created Time: 2019年06月29日 星期六 16时06分54秒
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
#define MAX_N 1000000
int prime[MAX_N + 5];

int main() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i; j <= MAX_N; j += i) {
            prime[j] += 1;
        }
    }
    for (int i = 1; i <= MAX_N; i++) {
        int flag = 1;
        for (int j = 0; j < 4 && flag; j++) {
            flag = (prime[i + j] == 4);
        }
        if (flag) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
