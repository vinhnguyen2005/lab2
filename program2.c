#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// function check diem A co nam trong hinh tron hay ko
int checkcircle(double x, double y, double radius) {
    // Tinh khoang cach giua 2 diem
    double distance = fabs(sqrt(x * x + y * y));
    if (distance > radius) {
        return 0; // A ko nam trong hinh tron r
    }
    return 1; // A nam trong hinh tron r
}

int main() {
    double x, y, r;
    // Nhap toa do cho cac bien
    printf("Nhap hoanh do diem A: ");
    scanf("%lf", &x);
    printf("Nhap tung do diem A: ");
    scanf("%lf", &y);
    printf("Nhap ban kinh: ");
    scanf("%lf", &r);
    if (checkcircle(x, y, r)) {
        printf("Diem A(%.2lf, %.2lf) nam trong hinh tron.\n", x, y);
    } else {
        printf("Point A(%.2lf, %.2lf) ko nam trong hinh tron.\n", x, y);
    }
    return 0;
}
