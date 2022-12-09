#include <stdio.h>

int main(){
	int a,b,c,largest;
	scanf("%d %d %d",&a,&b,&c);
	largest = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("%d is largest number among the %d %d %d\n",largest,a,b,c);
	return 0;
}

