#include<stdio.h>
int main(){

	int num = 11, flag = 0; 
	if(num<2){
		printf("Not a prime number!");
	}else {
		for (int i = 2; i <= num/2; i++){
			if(num % i == 0) {
				printf("Not a prime number!");
				flag=1;
				break;
			}
		}
		
		if (flag == 0){
			printf("Number is prime!");
		}
	}
}
