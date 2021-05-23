
#include <stdio.h>
#include <math.h>
void getData(float* a,
            float* b,
            float* c);

void getResult(
    float a,
    float b,
    float c
);

int main() 
{ 
    float a;
    float b;
    float c;
    getData(&a,&b,&c);
    getResult(a,b,c);
    return 0; 
}

void getData (
    float* a,
    float* b,
    float* c
) {
    printf("Nhap a\n");
    scanf("%f", a);
    printf("Nhap b\n");
    scanf("%f", b);
    printf("Nhap c\n");
    scanf("%f", c);
}

void getResult(
    float a,
    float b,
    float c
) {
    float delta = b*b/(4*a*c);
    double s = sqrt(delta);
    if (delta <= 0) {
        printf("Phuong trinh vo nghiem\n");
    } else if (delta >= 0) {
        printf("Phuong trinh co nghiem\n");
        float x1 = (-b + s) / a;
        float x2 = (-b - s) / a;
        printf("x1 = %f", x1);
        printf("x2 = %f", x2);
    }
}