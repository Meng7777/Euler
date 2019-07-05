/*************************************************************************
	> File Name: EP03.c
	> Author: meng
	> Mail: 2206084014@qq.com
	> Created Time: 2019年05月19日 星期日 19时04分33秒
 ************************************************************************/

#include<stdio.h>
#define N 600851475143LL

int main() {
    long long num = N, ans, i = 2;
    while (i * i <= num) {
        if (num % i == 0) ans = i;  //ans记录最大素因子
        while (num % i == 0) num /= i;
        i++;
    }
    if (num != 1) ans = num;  //num 为什么一定是素数
    printf("%lld\n", ans);
    return 0;

}
