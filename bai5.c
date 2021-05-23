// Mang
#include <stdio.h>

int sum = 0;
int i = 0;
int a[0];

for(i = 0; i < 6; i++) {
    printf("phan tu thu %d cua mang la %d\n", i, a[i]);
    sum += a[i];
    printf("%d", sum);
}

