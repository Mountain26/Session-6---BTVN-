#include <stdio.h>

int main() {
    int num, i;
    printf("Nhap vao mot so nguyen bat ky: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                printf("Uoc cua so nhap la: %d\n", i);
            }
}
}
