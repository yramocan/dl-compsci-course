#include <stdio.h>

int lcm(int, int);
int gcd(int, int);

int main() {
    int x = 144, y = 10;
    printf("lcm(%d, %d) = %d\n", x, y, lcm(x, y));
    return 0;
}

int lcm(int x, int y) {
    if (x >= 0 && y >= 0) return (x * y) / gcd(x, y);
    return -999;
}

int gcd(int x, int y) {
    if (y == 0) return x;
    else return gcd(y, x % y);
}
