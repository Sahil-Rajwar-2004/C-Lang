#include <stdio.h>

int getPrime(int x){
	int iter,isPrime = 1;
	for(int iter=2;iter<=x/2;++iter){
		if(x%iter==0){
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}

int main(){
	int start,end,point;
	scanf("%d %d",&start,&end);
	if(start>=2 && end>=2){
		if(start>end){
			start = start + end;
			end = start - end;
			start = start - end;
		}
		for(int i=start+1;i<end;++i){
			point = getPrime(i);
			if(point == 1){
				printf("%d ",i);
			}
		}printf("\n");
	}else{
		printf("input should be greater than 2\n");
	}

	return 0;
}

