#include <stdio.h>

int summation(float x,float y);
int subtraction(float x,float y);
int multiplication(float x,float y);
int division(float x,float y);

int main(){
	float a,b;
	char opr;
	printf("a = ");
	scanf("%f",&a);
	printf("b = ");
	scanf("%f\n",&b);
	scanf("%c",&opr);
	
	switch (opr){
		case '+':printf("%f + %f = %d\n",a,b,summation(a,b));
				 break;
		case '-':printf("%f - %f = %d\n",a,b,subtraction(a,b));
				 break;
		case 'x':printf("%f x %f = %d\n",a,b,multiplication(a,b));
				 break;
		case '/':if (b != 0){
					 printf("%f / %f = %d\n",a,b,division(a,b));
				 }else {
					 printf("Can't be divisible by Zero\n");
				 }
				 break;

		default:
				  printf("Invalid Operator!\n");
				  break;
	}
	return 0;
}

int summation(float x,float y){
	return x+y;
}
int subtraction(float x,float y){
	return x-y;
}
int multiplication(float x,float y){
	return x*y;
}
int division(float x,float y){
	return x/y;
}
