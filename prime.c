#include <stdio.h>

int main(){
	int number;
	int start=2;

	printf("number: ");
	scanf("%d",&number);
	while(start<number){
		if(number%start==0){
			printf("%d is not prime for %d\n",number,start);
		}else{
			printf("%d is prime for %d\n",number,start);
		}
		start++;
	}

	return 0;
}

