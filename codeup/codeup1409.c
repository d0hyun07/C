#include <stdio.h>

int main(){
	int i;
	int k,arr[11];
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	printf("%d",arr[k-1]);
	
}
