/*************************************************************************
	> File Name: EP07.cpp
	> Author: meng
	> Mail: 2206084014@qq.com
	> Created Time: 2019年06月28日 星期五 21时40分00秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

inline bool is_prime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int cnt = 0, i = 1;

    while (cnt < 10001) {
        i++;
        if (is_prime(i)) cnt += 1;
    }
    printf("%d\n", i);
    return 0;
}
