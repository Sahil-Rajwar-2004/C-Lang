#include <stdio.h>

int main(){
	int len,sum = 0;
	printf("number: ");
	scanf("%d",&len);

	for (int i=0;i<=len;i++){
		sum += i;
	}
	printf("%d\n",sum);
	return 0;
}

