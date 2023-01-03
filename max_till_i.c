#include <stdio.h>

int main(){
	int size;
	scanf("%d",&size);
	int arr[size],h = -9999;

	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		if(h<=arr[i]){
			h = arr[i];
			printf("%d\n",h);
		}
	}

	return 0;
}

