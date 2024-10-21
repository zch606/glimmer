#include <stdio.h>

int gcd(int a, int b) {
    while (b!= 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int m, n;
    printf("请输入两个整数（0 < m,n < 2^31）：");
    scanf("%d %d", &m, &n);
    int result = gcd(m, n);
    printf("这两个整数的最大公约数是：%d\n", result);
    return 0;
}