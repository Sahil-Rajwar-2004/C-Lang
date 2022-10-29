#include <stdio.h>

int fact(int num);

int main(){
	printf("%d\n",fact(5));
	return 0;
}

int fact(int num){
	if (num < 0){
		return 1;
	}else if (num <= 1){
		return 1;
	}
	else{
		return num*fact(num-1);
	}
}

