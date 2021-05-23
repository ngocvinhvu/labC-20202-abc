#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int N;
float *E, c;

void getData(int *N) {
    printf("\nNhap gia tri cho N = ");
    scanf("%d", N);
}

void check(float *E, int N) {
    for (int i = 0; i < N + 1; i++) {
        if (E[i] <= 0) {
            printf("\nSo nho hon hoac bang 0 la %0.2f", E[i]);
        }
    }
}

int pytago(float *E, int N) {
    for (int i = 0; i < N + 1; i++) {
        if (E[i] <= 0) {
            return 0;
        }
        for (int i = 0; i < N + 1; i++) {
            i++;
            for (int j = 0; j < N; j++) {
                j++;
                for (int k = 0; k < N; k++) {
                    if (pow(E[i], 2) == pow(E[j], 2) + pow(E[k], 2)) {
                        printf("\nso thoa man la %f ", E[i]);
                        printf("\nso thoa man la %f ", E[j]);
                        printf("\nso thoa man la %f ", E[k]);
                        k++;
                        
                    } else {
                        k++;
                    }
                }
            }
        }
    }
}

int main() {
    getData(&N);
    printf("\nGia tri cua N la : %d", N);
    E = (float*) malloc(N * sizeof(float));
    for (int c = 0; c<N+1; c++) {
        printf("\nNhap gia tri cho E[%d] ", c);
        scanf("%f", &E[c]);
    }
    check(E, N);
    pytago(E, N);
}
