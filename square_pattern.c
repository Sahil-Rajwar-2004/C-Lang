#include <stdio.h>

int main(){
	int num = 3;
	int i=1;
	while(i<=num){
		int j = 1;
		while(j<=num){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

