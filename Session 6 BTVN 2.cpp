#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int bienSochan = 0;
	int bienSole = 0;



	printf("Nhap so thu nhat: \n");
	scanf("%d", &a); 
	printf("Nhap so thu hai: \n");
	scanf("%d", &b);	
	printf("Nhap so thu ba: \n");
	scanf("%d", &c);
	printf("Nhap so thu bon: \n");
	scanf("%d", &d); 
	printf("Nhap so thu nam: \n");
	scanf("%d", &e);
	
	if(a%2=0){
		bienSole++;
	}else{
		bienSochan++;
	}
	if(b%2!=0){
		bienSole++;
	}else{
		bienSochan++;
	}
	if(c%2!=0){
		bienSole++;
	}else{
		bienSochan++;
	}
	if(d%2!=0){
		bienSole++;
	}else{
		bienSochan++;
	}
	if(e%2!=0){
		bienSole++;
	}else{
		bienSochan++;
	}
	
	printf("So luong so le trong cac so da nhap la:%d\n", bienSole);
	printf("So luong so chan trong cac so da nhap la:%d\n", bienSochan);
}

	
