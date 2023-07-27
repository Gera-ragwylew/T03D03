#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    char c = 0;
    if(scanf("%d %d%c", &a, &b, &c) != 3 || c != '\n') {
        printf("n/a");
    } else {
        printf("%d ", a+b);
        printf("%d ", a-b);
        printf("%d ", a*b);
        if(b != 0) {
            printf("%d\n", a/b);
        } else {
            printf("n/a");
        }
    }
    return 0;
}