#include <stdio.h>

int main(){
	int n;
	int count = 0;
	int number= 0;
	int prime = 2;
	
	printf("Moi ban nhap so so nguyen to: ");
	scanf("%d", &n); 
	
	while(number<n){
		count = 0; 
		for(int i=1; i<=prime; i++){
			if(prime%i==0){
			count++;
			} 
		}
		if(count==2){
			printf("So nguyen to %d\n", prime);
			number++; 
		} 
	 prime++; 
	}	
}
