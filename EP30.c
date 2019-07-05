/*************************************************************************
	> File Name: EP30.c
	> Author: meng
	> Mail: 2206084014@qq.com
	> Created Time: 2019年05月19日 星期日 20时40分00秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>

#define MAX_N 354294

int is_valid(int x) {
    int raw = x, temp = 0;
    while(x) {
        temp += pow(x %10, 5);
        x /= 10;
    }
    return temp == raw;
}

int main() {
    int sum = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_valid(i)) continue;
        sum += i;
        printf("i : %d\n", i);
    }
    printf("%d\n", sum);
    return 0;
}
