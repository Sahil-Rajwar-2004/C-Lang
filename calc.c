#include <stdio.h>

int main(){
	float x,y;
	char oprator;
	printf("num1: ");
	scanf("%f",&x);
	printf("num2: ");
	scanf("%f",&y);	
	printf("select operator (a,s,d,m): ");
	scanf("%s",&oprator);
	switch (oprator){
		case 'a': printf("%f\n",x+y);
				  break;
		case 's': printf("%f\n",x-y);
				  break;
		case 'd': printf("%f\n",x/y);
				  break;
		case 'm': printf("%f\n",x*y);
				  break;
		default : printf("expected from (a,s,d,m)!");
	}

	return 0;
}

