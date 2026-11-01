#include <stdio.h>
#include <math.h>

int main() {
    double a;
    double b;
    double c;
    double discriminant;
    double x1;
    double x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            printf("-1\n");
        } else {
            printf("%.2f\n", -c / b);
        }
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("-1\n");
    } else if (discriminant == 0) {
        printf("%.2f\n", -b / (2 * a));
    } else {
        x1 = (-b - sqrt(discriminant)) / (2 * a);
        x2 = (-b + sqrt(discriminant)) / (2 * a);
        if (x1 > x2) {
            double temporary = x1;
            x1 = x2;
            x2 = temporary;
        }
        printf("%.2f %.2f\n", x1, x2);
    }

    return 0;
}
