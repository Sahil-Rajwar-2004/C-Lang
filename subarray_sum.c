#include <stdio.h>

int main(){
	int size;
	scanf("%d",&size);
	int arr[size],sum;

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<size;i++){
		sum = 0;
		for(int j=i;j<size;j++){
			sum += arr[j];
			printf("%d\n",sum);
		}
	}
	return 0;
}

