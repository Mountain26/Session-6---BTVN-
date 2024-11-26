#include <stdio.h>

int main() {
    int month, year;
    printf("Moi ban nhap vao thang ma ban muon ( 1-12)): \n");
    scanf("%d", &month);
    printf("Moi ban nhap vao so nam ma ban muon: ");
    scanf("%d", &year);

    switch (month) {
    	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        	printf("Thang %d naM %d co 31 ngay", month, year);
        	break;
    	case 4: case 6: case 9: case 11:
        	printf("Thang %d nam %d co 30 ngay", month, year);
        	break;
     	case 2:
     		if ( year%4==0 && year%100!=0 || year%400==0){
     			printf("Thang %d nam %d co 29 ngay", month, year);
			 }else{
			 	printf("Thang %d nam %d co 28 ngay", month, year);
			 }
        	break;
    }
    return 0;
}
