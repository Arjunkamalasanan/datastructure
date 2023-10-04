#include<stdio.h>
#include<unistd.h>
int main() {
	int temp;
	for (int i = 10; i>=1; i--){
		sleep(1);
		printf("%d\n", temp);
		temp = i;
	}

}
