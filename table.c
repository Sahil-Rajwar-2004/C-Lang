#include <stdio.h>

int main(){
	int n,range,res;
	scanf("%d %d",&n,&range);
	
	for(int i=0;i<range;i++){
		res = n*range;
		printf("%d x %d = %d\n",n,range,res);
	}

	return 0;
}

