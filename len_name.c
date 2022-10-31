#include <stdio.h>
#include <string.h>

int main(){
	char name[100];
	printf("enter your name: ");
	fgets(name,100,stdin);
	int i = 0;
	while (name[i]!='\0'){
		i++;
	}
	printf("Length of %d\n",i-1);
	return 0;
}

