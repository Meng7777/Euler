/*************************************************************************
	> File Name: EP06.c
	> Author: meng
	> Mail: 2206084014@qq.com
	> Created Time: 2019年05月19日 星期日 19时36分15秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int sum1 = 0, sum2 = 0;
    sum1 = 5050;
    sum2 = (2 * (100 * 100 * 100) + 3 * (100 * 100) + 100) / 6;
    //for (int i = 1; i <= 100; i++) {
    //    sum1 += i, sum2 += i * i;
    //}
    printf("%d\n", sum1 * sum1 - sum2);
    return 0;

}
