#include <stdio.h>
#include <math.h>

int main() {
    double x = 0;
    double y = 0;
    char c = 0;
    if(scanf("%lf%c", &x, &c) != 2 || c != '\n') {
        printf("n/a");
    } else {
        y = (7.0*pow(10, -3)) * pow(x, 4) + ((22.8 * pow(x,(1.0/3.0)) - (1.0*pow(10, 3))) * x + 3.0) / (x * x / 2.0) - x * pow((10.0 + x),(2.0/x)) - 1.01;
        printf("%.1lf", y);
    }
    return 0;
}