#include <stdio.h>
#include <math.h>

int main () {
    double a = 0;
    double b = 0;
    char c = 0;
    if(scanf("%lf %lf%c", &a, &b, &c) != 3 || c != '\n') {
        printf("n/a");
    } else {
        if ((pow(a, 2) + pow(b, 2)) < 25) {
            printf("GOTCHA");
        } else {
            printf("MISS");
        }
    }
    return 0;
}