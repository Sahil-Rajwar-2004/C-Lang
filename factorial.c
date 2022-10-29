#include <stdio.h>

int main(){
	int num;
	printf("enter number: ");
	scanf("%d",&num);

	int fact = 1;
	for (int i=1;i<=num;i++){
		fact = fact*i;
	}
	printf("%d! = %d\n",num,fact);
	return 0;
}

