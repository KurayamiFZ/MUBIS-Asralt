#include <stdio.h>
#include <math.h>


void problem1(){
    double diametr = 6.0;
    double radius = diametr/2.0;
    double ShalniiRadius = radius + 0.20;


    double tlbai = M_PI * ShalniiRadius * ShalniiRadius;
    double niit = tlbai / 0.80;
   
    printf("Asuudal 1\n");
    printf("Shalnii Talbai: %.2f m.kw\n", tlbai);
    printf("Awah planknii niit talbai: %.2f m.kw\n", niit);
    printf("\n");
}


void problem2(){
    int tsaas = 3;
   
    int bohi = tsaas * 12;
    int mod = tsaas * 60;


    printf("Asuudal 2\n");
    printf("Bohi Zadrah hugatsaa: %d sar\n", bohi);
    printf("Mod Zadrah hugatsaa: %d sar\n", mod);
    printf("\n");


}


void problem3(){
    double haygdal = 30000;
    double dahiwar = haygdal * 0.20;
    double vldsen = haygdal - dahiwar;


    printf("Asuudal 3\n");
    printf("Dahin Bolowsruulsan: %.0f tonn\n", dahiwar);
    printf("Vldsen Haygdal: %.0f tonn\n", vldsen);
    printf("\n");
}


void problem4(){
    double x1, y1;
    double x2, y2;
    double x3, y3;


    printf("Asuudal 4\n");
    printf("A(x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("B(x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("C(x3, y3): ");
    scanf("%lf %lf", &x3, &y3);
    printf("\n");


    double a = sqrt(
        (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)
    );


    double b = sqrt(
        (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)
    );


    double c = sqrt(
        (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)
    );


    double S = fabs(
        x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)
    ) / 2.0;


    if (S == 0){
        printf("Gurwaljin vvseh bolomjgui.\n");
        printf("\n");
        return;
    }


    double R = (a * b * c) / (4.0 * S);


    printf("Bagtsan Toirgiin Radius: %.2f\n", R);
    printf("\n");
}


void problem5(){
    double R;
    int n;


    printf("Asuudal 5\n");
    printf("Radius: ");
    scanf("%lf", &R);
    printf("Untsug: ");
    scanf("%d", &n);


    double perimetr = 2.0 * n * R * sin(M_PI / n);


    printf("Perimeter: %.2f\n", perimetr);
}


// Хавтгай дээр хэрчмийн захын A(x1, y1), B(x2, y2)  цэгүүд, AB хэрчмийн  lambda харьцаагаар хуваах lambda өгөдсөн бол AB хэрчим дээрх M цэгийн координат x, y тоонуудыг ол
//(x = x1 + lambda * x2)/(1 + lambda), (x = x1 + lambda * x2)/(1 + lambda)),


void problem8(){
    double x1, y1, x2, y2, lambda;


    printf("Asuudal 8\n");
    printf("A(x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("B(x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Lambda: ");
   
    scanf("%lf", &lambda);


    if(lambda == -1.0){
        printf("Lambda -1.0 eer ileerhiilegdj bolohgui");
        return;
    }


    double x = (x1 + lambda * x2) / (1 + lambda);
    double y = (y1 + lambda * y2) / (1 + lambda);


    printf("M tsegvvdiin koordinat: (%.2lf, %.2lf\n)", x, y);
}


int main(){
    problem1();
    problem2();
    problem3();
    problem4();
    problem5();
    problem8();
}

