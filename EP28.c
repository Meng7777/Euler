/*************************************************************************
	> File Name: EP28.c
	> Author: meng
	> Mail: 2206084014@qq.com
	> Created Time: 2019年05月19日 星期日 20时23分24秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int sum = 1;
    for (int l = 3; l <= 1001; l += 2) {
        sum += 4 * l * l - 6 * l + 6;
    }
    printf("%d\n", sum);
    return 0;
}
