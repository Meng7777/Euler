/*************************************************************************
	> File Name: EP01-2.c
	> Author: meng
	> Mail: 2206084014@qq.com
	> Created Time: 2019年06月25日 星期二 15时28分11秒
 ************************************************************************/

#include <stdio.h>

int is_valid(int x) {
    return x % 3 == 0 || x % 5 == 0;
}

int main() {
    int sum = 0;
    for (int i = 1; i < 1000; i++) {
        if (is_valid(i)) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
