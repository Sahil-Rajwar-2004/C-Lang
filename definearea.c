#include <stdio.h>
#define AREA(r) (3.1415*r*r)

int main(){
	int n;
	scanf("%d",&n);
	printf("area of circle with radius %d is %f\n",n,AREA(n));
	return 0;
}

