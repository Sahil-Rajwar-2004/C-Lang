#include <stdio.h>

int sum(int n);

int main(){
	printf("%d\n",sum(5));
	return 0;
}

int sum(int n){
	if (n == 1){
		return 1;
	}
	int sum1N = sum(n-1);
	int sumN = sum1N+n;
	return sumN;
}

