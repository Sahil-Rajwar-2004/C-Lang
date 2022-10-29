#include <stdio.h>

int main(){
	int num,start;
	printf("number: ");
	scanf("%d",&num);
	
	printf("from: ");
	scanf("%d",&start);
	for (int i=start;i>=1;i--){
		printf("%d x %d = %d\n",num,i,num*i);
	}
	return 0;
}

