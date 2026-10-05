#include <stdio.h>
#include <math.h>

void problem1() {
    double a, area;
    printf("1: Adil Talt Gurwaljnii Talbai\n");
    printf("Hajuu Taliin Urt: ");
    scanf("%lf", &a);
    area = (sqrt(3) / 4.0) * a * a;
    printf("Area: %.4lf\n\n", area);
}

void problem2() {
    double a, b, c;
    printf("2: Gurwaljnii Median\n");
    printf("Taliin Urtuud a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        double ma = 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);
        double mb = 0.5 * sqrt(2 * a * a + 2 * c * c - b * b);
        double mc = 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);
        printf("Median: ma = %.4lf, mb = %.4lf, mc = %.4lf\n\n", ma, mb, mc);
    } else {
        printf("Gurwaljnii taluud bruu bn!\n\n");
    }
}

void problem3() {
    double a, b, c;
    printf("3: Gurwaljnii Undur\n");
    printf("Taliin Urtuud a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        double p = (a + b + c) / 2.0;
        double S = sqrt(p * (p - a) * (p - b) * (p - c));
        double ha = (2 * S) / a;
        double hb = (2 * S) / b;
        double hc = (2 * S) / c;
        printf("Undur: ha = %.4lf, hb = %.4lf, hc = %.4lf\n\n", ha, hb, hc);
    } else {
        printf("Gurwaljnii taluud bruu bn!\n\n");
    }
}

void problem4() {
    double a, b, c;
    printf("4: Bisectors ba Untsug\n");
    printf("Taliin Urtuud a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        double p = (a + b + c) / 2.0;
        double A = acos((b * b + c * c - a * a) / (2 * b * c)) * (180.0 / M_PI);
        double B = acos((a * a + c * c - b * b) / (2 * a * c)) * (180.0 / M_PI);
        double C = acos((a * a + b * b - c * c) / (2 * a * b)) * (180.0 / M_PI);
        
        double la = (2 * sqrt(b * c * p * (p - a))) / (b + c);
        double lb = (2 * sqrt(a * c * p * (p - b))) / (a + c);
        double lc = (2 * sqrt(a * b * p * (p - c))) / (a + b);
        
        printf("Untsugvvd: A = %.2lf°, B = %.2lf°, C = %.2lf°\n", A, B, C);
        printf("Bisectors: la = %.4lf, lb = %.4lf, lc = %.4lf\n\n", la, lb, lc);
    } else {
        printf("Gurwaljnii taluud bruu bn!\n\n");
    }
}

void problem5() {
    double a, b, c;
    printf("5: Kvadratik Tegshitgel\n");
    printf("Coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        printf("Quadric tegshitgel bish bn (a = 0).\n\n");
        return;
    }
    double D = b * b - 4 * a * c;
    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        printf("Two real roots: x1 = %.4lf, x2 = %.4lf\n\n", x1, x2);
    } else if (D == 0) {
        double x = -b / (2 * a);
        printf("One real root: x = %.4lf\n\n", x);
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-D) / (2 * a);
        printf("Complex: x1 = %.4lf + %.4lfi, x2 = %.4lf - %.4lfi\n\n", realPart, imagPart, realPart, imagPart);
    }
}

void problem6() {
    double x1, y1, x2, y2, x3, y3;
    printf("6: 3 Tsegees Orshig Gurwaljin\n");
    printf("Coordinataa oruulna uu (x1 y1), (x2 y2), (x3 y3): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    double area = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    if (area > 0) {
        printf("Gurwaljin baih bolomjtoi (area = %.4lf).\n\n", area);
    } else {
        printf("Tseguud neg shuluun deer orshihgui bn; gurwaljin baih bolomjgui.\n\n");
    }
}

void problem1_3() {
    int alp; 
    float si, co, tg, ct;
    printf("1.3: Trignometry\n");
    printf("alpha=");
    scanf("%d", &alp);
    
    si = sin(alp * M_PI / 180.0);
    co = cos(alp * M_PI / 180.0);
    tg = tan(alp * M_PI / 180.0);
    ct = 1.0 / tg; /* cotangent calculation */
    
    printf("sin(%d)=%.4f\tcos(%d)=%.4f\n", alp, si, alp, co);
    printf("tg(%d)=%.4f\tctg(%d)=%.4f\n\n", alp, tg, alp, ct);
}

int main() {
    problem1();
    problem2();
    problem3();
    problem4();
    problem5();
    problem6();
    problem1_3();
    return 0;

    
}