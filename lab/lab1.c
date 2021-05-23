#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float *D;
int n;
float avg, std, max, min;

void getData(int *n){
    printf("\nNhap gia tri cho N: ");
    scanf("%d", n);
}

void checkData(float *D, int n) {
    for(int i = 0; i < n; i++) {
        if(D[i] < 0 || D[i] > 10) {
            D[i] = 0;
        } else if(D[i] - (int)D[i] == 0.5) {
            D[i] = (int)D[i];
        }
    }
}

float processData(float *D, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        min = D[0];
        max = D[0];
        if(D[i] < min) {
            min = D[i];
        }
        if(D[i] > max) {
            max = D[i];
        }
        sum += D[i];
    }
    printf("\nmin = %0.2f", min);
    printf("\nmax = %0.2f", max);
    printf("\nsum = %0.2f", sum);
    avg = sum / n;
    printf("\navg = %0.2f", avg);
    return "%0.2f", avg;

}

void checkStd(float *D, int n) {
    avg = processData(D, n);
    float div, sqr;
    for (int i = 0; i < n; i++) {
        div = D[i] - avg;
        sqr += pow(div, 2);
    }
    std = sqrt(sqr / n);
    if(std > 2) {
        printf("\nHoc lech");
    } else {
        printf("\nKhong hoc lech");
    }
}

int main() {
    getData(&n);
    D = (float*) malloc(n * sizeof(float));
    for(int i = 0; i < n; i++) {
        printf("\nNhap gia tri cho cac mon hoc ");
        scanf("%f", &D[i]);
    }
    checkData(D, n);
    checkStd(D, n);
}