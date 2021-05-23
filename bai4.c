#include <stdio.h>

// int main (void) {
//     int limit;

//     printf ("Nhap limit ");
//     scanf ("%d", &limit);
//     for (int i = 1; i <= limit; i++)
//         printf("\t%d\n", i);
//     return 0;
// }
void println(int a);

int main (void) {
    int limit;
    int a = 9;

    printf("nhap limit ");
    scanf("%d", &limit);
    while (a < limit) {
        println(a);
        a++;
    }
    // 

    int[] a;
    int cbFunc(int item, int index){
        return item + index;
    }
    int[] aRes = map(a, cbFunc);
}

void println(int a) {
    printf("%d\n", a);
}

int[] map (int a[], void cb) {
    int length = a.length;
    int aRes[];
    for(int i = 1; i<= length; i++){
       int res = cb(a[i], i);
       aRes[i] = res;
    }
    return aRes;
}