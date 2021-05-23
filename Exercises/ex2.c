#include <stdio.h>
#include <math.h>

int N, t;
float avg;
int *D; 

void getData() {
    printf("Gan gia tri cho N =");
    scanf("%d", &N);
    printf("Gan gia tri cho avg =");
    scanf("%f", &avg);
}

int main() {
    getData();
    int D[N], i;
    int sum = 0;
    int a = 9999;
    for (i=0; i<N+1; i++) {
        printf("gan gia tri cho D[%d] =", i);
        scanf("%d", &D[i]);
        if (D[i] > sqrt(avg)) {
            sum += D[i];
        }
    }
    for (i=0; i<N+1; i++) {
    if ((D[i] > avg) && (D[i] < a)) {
            a = D[i];
        }
    }
    printf("sum = %d\n", sum);
    printf("Gia tri can tim la %d\n", a);
}

