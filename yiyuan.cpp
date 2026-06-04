#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d1, d2, delta;
    scanf("%f%f%f", &a, &b, &c);

    // 情况4：系数都为0
    if (a == 0 && b == 0 && c == 0) {
        printf("Zero Equation");
        return 0;
    }

    // 情况5：a和b为0，c不为0
    if (a == 0 && b == 0) {
        printf("Not An Equation");
        return 0;
    }

    // 一次方程（a=0，b≠0）
    if (a == 0) {
        d1 = -c / b;
        // 处理-0.00
        if (d1 > -0.005 && d1 < 0.005) d1 = 0.0;
        printf("%.2f", d1);
        return 0;
    }

    // 二次方程（a≠0）
    delta = b*b - 4*a*c;

    // 情况1：两个不等实根（先大后小）
    if (delta > 0) {
        d1 = (-b + sqrt(delta)) / (2*a);
        d2 = (-b - sqrt(delta)) / (2*a);
        // 确保顺序：先大后小
        if (d1 < d2) {
            float temp = d1;
            d1 = d2;
            d2 = temp;
        }
        // 处理-0.00
        if (d1 > -0.005 && d1 < 0.005) d1 = 0.0;
        if (d2 > -0.005 && d2 < 0.005) d2 = 0.0;
        printf("%.2f\n%.2f", d1, d2);
    }
    // 情况3：一个实根
    else if (delta == 0) {
        d1 = (-b) / (2*a);
        if (d1 > -0.005 && d1 < 0.005) d1 = 0.0;
        printf("%.2f", d1);
    }
    // 情况2：两个复数根
    else {
        d1 = (-b) / (2*a);  // 实部
        d2 = sqrt(-delta) / (2*a);  // 虚部绝对值
        // 处理实部-0.00
        if (d1 > -0.005 && d1 < 0.005) d1 = 0.0;
        printf("%.2f+%.2fi\n", d1, d2);
        printf("%.2f-%.2fi", d1, d2);
    }

    return 0;
}
