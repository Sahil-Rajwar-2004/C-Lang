/*
 * Write the programme to find weather its upper or lower case!
*/

#include <stdio.h>

int main(){
	char alphabet;
	printf("enter char: ");
	scanf("%c",&alphabet);

	if (alphabet>='A' && alphabet<='Z'){
		printf("Upper Case\n");
	}else if (alphabet>='a' && alphabet<='z'){
		printf("Lower Case\n");
	}
	else{
		printf("Not english word!\n");
	}
	return 0;
}

