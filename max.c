#include <stdio.h>

int max(int a, int b);

int main() {
    int a = 0;
    int b = 0;
    char c = 0;
    if(scanf("%d %d%c", &a, &b, &c) != 3 || c != '\n') {
        printf("n/a");
    } else {
        printf("%d", max(a, b));
    }
    return 0;
}

int max(int a, int b) {
    if (a > b)
        return a;
    return b;
}