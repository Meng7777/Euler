/*************************************************************************
	> File Name: EP07-2.cpp
	> Author: meng
	> Mail: 2206084014@qq.com
	> Created Time: 2019年06月28日 星期五 21时53分03秒
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
#define MAX_N 200000
int is_prime[MAX_N + 5];

int main() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (is_prime[i]) continue;
        for (int j = 2 * i; j <= MAX_N; j += i) {
            is_prime[j] = 1;
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        if (is_prime[i]) continue;
        is_prime[++is_prime[0]] = i;
    }
    cout << is_prime[10001] << endl;
    return 0;
}
