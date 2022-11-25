#include <stdio.h>

int main(){
	int num,sum=0;
	printf("number: ");
	scanf("%d",&num);
	int arr[num];
	for(int i=0;i<num;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("sum: %d\n",sum);
	return 0;
}

