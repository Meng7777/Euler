/*************************************************************************
	> File Name: EP01-3.c
	> Author: meng
	> Mail: 2206084014@qq.com
	> Created Time: 2019年06月25日 星期二 15时34分19秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int sum3 = (3 + 999) * 333 / 2;
    int sum5 = (5 + 995) * 199 / 2;
    int sum15 = (15 + (1000 / 15) * 15) * (1000 / 15) / 2;
    printf("%d\n", sum3 + sum5 - sum15);
    return 0;
}
