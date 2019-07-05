/*************************************************************************
	> File Name: EP05.c
	> Author: meng
	> Mail: 2206084014@qq.com
	> Created Time: 2019年06月28日 星期五 20时16分02秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 232792560LL

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    int ans = 1;
    for (int i = 1; i <= 20; i++) {
        if (ans % i == 0) continue;
            ans = ans / gcd(ans, i) * i;
    }
    printf("%d\n", ans);
    return 0;
}
