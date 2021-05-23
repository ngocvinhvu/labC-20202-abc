#include <stdio.h>
#include <stdlib.h>


int N;
float *X, *Y;
float *pX, *pY;

// void getData(int *N) {
//     printf("\nNhap gia tri cua N ");
//     scanf("%d", N);
// }

// void getVertices(float x, float y, float width, float length) {
//     width = 2 * x;
//     length = 2 * y;
//     printf("\nToa do diem thu nhat la: (0, 0)");
//     printf("\nToa do diem thu 2 la: (0, %f)", length);
//     printf("\nToa do diem thu 3 la: (%f, 0)", width);
//     printf("\nToa do theo x cua diem thu 4 la: %f", width);
//     printf("\nToa do theo y cua diem thu 4 la: %f", length);
// }

void checkColliance(float pX, float pY, float x, float y, float width, float length) {
    width = 2 * x;
    length = 2 * y;
    printf("\nToa do theo truc x cua diem P la %f ", pX);
    printf("\nToa do theo truc y cua diem P la %f ", pY);
    if(pX < width && pY < length) {
        printf("\nDiem p nam trong long hinh chu nhat");
    } else {
        printf("\nDiem p khong nam trong long hinh chu nhat");
    }
}

int main(float *pX, float *pY) {
    pX = (float*) malloc(1 * sizeof(float));
    pY = (float*) malloc(1 * sizeof(float));
    printf("\nToa do theo truc x cua diem nay la ");
    scanf("%f", pX);
    printf("\nToa do theo truc y cua diem nay la ");
    scanf("%f", pY);
    return 0;
}

// int main() {
//     getData(&N);
//     printf("\nGia tri cua N la: %d", N);
//     X = (float*) malloc(N * sizeof(float));
//     Y = (float*) malloc(N * sizeof(float));
//     for(int i = 0; i < N - 1; i++) {
//         printf("\nGan gia tri cho X[%d] = ", i);
//         scanf("%f", &X[i]);
//         printf("\nGan gia tri cho Y[%d] = ", i);
//         scanf("%f", &Y[i]);
//         // cau d
//         getVertices(X[i], Y[i], 2, 6);
//     }
// }

