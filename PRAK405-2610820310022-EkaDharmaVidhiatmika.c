#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int total_keseluruhan = 0;

    for (int i = 1; i <= n; i++) {
        int total_baris = 0;
        
        for (int j = i; j >= 1; j--) {
            total_baris += j * k;
            printf("(%d*%d)", j, k);
            if (j > 1) {
                printf(" + ");
            }
        }
        
        printf(" = %d\n", total_baris);
        total_keseluruhan += total_baris;
    }

    printf("%d\n", total_keseluruhan);

    return 0;
}
