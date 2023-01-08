#include <stdio.h>

int main(){
	int n,start = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(start == 0){
				start = 1;
			}else{
				start = 0;
			}
			printf("%d",start);
		}printf("\n");
	}

	return 0;
}

