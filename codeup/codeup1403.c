#include <stdio.h>

int main(){
	int k;
	int arr[101];
	int i,j;
	
	scanf("%d",&k);
	
	for(i=0;i<k;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<k;j++){
			printf("%d\n",arr[j]);
		}
	}
}
