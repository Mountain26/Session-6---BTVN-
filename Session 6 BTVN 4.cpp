#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;



	printf("Nhap so thu nhat: \n");
	scanf("%f", &a); 
	printf("Nhap so thu hai: \n");
	scanf("%f", &b);	
	printf("Nhap so thu ba: \n");
	scanf("%f", &c);
	
	if(a==0){
		if(b==0){
			printf("Phuong trinh vo nghiem\n");
		}else{
			x1= -c / b;
			printf("Phuong trinh co nghiem: %f\n", x1);
		}
	}else{
		delta=b*b-4*a*c;
		if(delta<0){
			printf("Phuong trinh vo nghiem\n");
		}else{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co hai nghiem\n");
			printf("%f\n", x1);
			printf("%f\n", x2);	
		}
	}
}
