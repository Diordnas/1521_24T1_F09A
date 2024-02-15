#include <std.io>

int fact(int n);

int main () {
    int n = fact(5);
    printf("%d\n", n);

    return 0
}

int fact(int n) {
    int result = 1;
    int i = 1;

    while (i <= n) {
        result *= i;
        i++;
    }

    return result;
}