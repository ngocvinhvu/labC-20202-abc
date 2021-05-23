#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int N, i;
float *X, *Y;
float x, y, max, d;


void getData(int *N) {
    printf("Nhap du lieu cho N: ");
    scanf("%d", N);
}

void check(float *X, float *Y, int N) {
    int count = 0;
    for (i=0; i< N; i++) {
        if (X[i] == Y[i]) {
            count += 1;
        }
    }
    printf("So phan tu la %d\n", count);
}

int main() {
    getData(&N);
    printf("Gia tri cua N la: %d\n", N);
    X = (float*) malloc(N * sizeof(float));
    Y = (float*) malloc(N * sizeof(float));
    for (i=0; i< N; i++) {
        printf("X[%d] =", i);
        scanf("%f", &X[i]);
        printf("Y[%d] =", i);
        scanf("%f", &Y[i]);
    }
    check(X, Y, N);
    max = 0;
     
    for (i=0; i<N; i++) {
        d = sqrt(pow(2, X[i]) + pow(2, Y[i]));
        if (max < d) {
            max = d;
        }
    }
    printf("max = %f\n", max);
    return 0;
}

