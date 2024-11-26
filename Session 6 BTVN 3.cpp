#include <stdio.h>

int main() {
    int password;
    
    printf("Goi y mat khau di tu 1 -> 5 tu be den lon!!\n");
    printf("Moi ban nhap mat khau de dang nhap: ");
    scanf("%d", &password);
    
    while(password!=1234){
    printf("Moi ban nhap mat khau de dang nhap: ");
    scanf("%d", &password);
	}
}
