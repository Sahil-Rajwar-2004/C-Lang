#include <stdio.h>
#include <stdbool.h>

int main(){
	int n;
	printf("number: ");
	scanf("%d",&n);

	bool isPrime = 1;
	if(n == 1){
		printf("%d is a special number\n",n);
	}
	else if(n == 2){
		printf("%d is a prime number\n",n);
	}
	else if(n != 1|n != 2){
		for(int i=2;i<n;i++){
			if(n%i==0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 0){
			printf("%d is not a prime number\n",n);
		}
		else{
			printf("%d is a prime number\n",n);
		}
	}
	return 0;
}

