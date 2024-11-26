#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int sum = 0;



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
	
	if(a%2!=0){
		sum=sum+a;
	}
	if(b%2!=0){
		sum=sum+b;
	}
	if(c%2!=0){
		sum=sum+c;
	}
	if(d%2!=0){
		sum=sum+d;
	}
	if(e%2!=0){
		sum=sum+e;
	}
	
	printf("Tong cac so le o trong 5 so ban nhap la: %d ",sum);
}
	
