// Write a function that prints Namaste if user is India & Bonjour if the user is French.

#include <stdio.h>

void indian();
void french();
void american();
void russian();

int main(){
	char user;
	printf("user: ");
	scanf("%c",&user);

	switch (user){
		case 'i': indian();
				  break;
		case 'f': french();
				  break;
		case 'a': american();
				  break;
		case 'r': russian();
				  break;
		default:
				  printf("use can be indian,french,american or russian!\n");
				  break;
	}

	return 0;
}

void indian(){
	printf("Namaste\n");
}
void french(){
	printf("Bonjour\n");
}
void american(){
	printf("Hello\n");
}
void russian(){
	printf("Privet\n");
}



