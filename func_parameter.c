#include <stdio.h>

int sum(int x,int y);

int main(){
	int a,b;
	printf("value of a: ");
	scanf("%d",&a);
	printf("value of b: ");
	scanf("%d",&b);

	int res = sum(a,b);
	printf("%d + %d = %d\n",a,b,res);
	return 0;
}

int sum(int x,int y){
	return x+y;
}

