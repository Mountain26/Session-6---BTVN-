#include <stdio.h>

int main() {
    int num, i, bienDem = 0;
    printf("Nhap vao mot so nguyen bat ky: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                bienDem++;
            }
}
	if(bienDem==2){
        printf("%d la so nguyen to.\n", num);
    }else {
        printf("%d khong phai la so nguyen to.\n", num);
    }
}
