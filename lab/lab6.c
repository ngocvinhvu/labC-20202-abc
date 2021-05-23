#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int N;
float *E, c;

void getData(int *N){
    printf("Nhap N = ");
    scanf("%d", N);
}

void check(float *M, int N) {
    for(int i = 0; i < N; i++) {
        if(M[i] < 1 || M[i] > 2) {
            printf("Phan tu nho hon 1 va lon hon 2 la %.2f", M[i]);
        }
    }
}

float sd(float *M, int N) {
    float std, avg, sqr, sum, sumsqr;
    for(int i = 0; i < N; i++) {
        sum += M[i];
    }
    avg = sum / N;
    for(int i = 0; i < N; i++) {
        sqr = ((M[i] - avg) * (M[i] - avg));
        sumsqr += sqr;
    }
    std = sqrt(sumsqr / N);
    printf("\nsum = %f", sum);
    printf("\navg = %f", avg);
    printf("\nsumsqr = %f", sumsqr);
    return "%.2f", std;

}

void pair(float *X, int N) {
    
}

int main() {
    getData(&N);
    printf("\nGia tri cua N la: %d", N);
    E = (float*) malloc(N * sizeof(float));
    for(int i = 0; i < N; i++) {
        printf("\nE[%d] = ", i);
        scanf("%f", &E[i]);
    }
    check(E, N);
    float std = sd(E, N);
    printf("\nDo lech chuan la : %.2f", std);
}