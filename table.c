#include <stdio.h>

int main(){
	int n,range,res;
	scanf("%d %d",&n,&range);
	
	for(int i=0;i<=range;i++){
		res = n*i;
		printf("%d x %d = %d\n",n,i,res);
	}

	return 0;
}

