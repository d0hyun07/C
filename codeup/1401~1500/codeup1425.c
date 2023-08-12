#include <stdio.h>

int main(){
	int n,c,arr[100] = {};
	int i,j,temp;
	
	
	scanf("%d %d",&n,&c);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i]<arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		if(i%c==0&&i!=0){
			printf("\n");
		}
		printf("%d ",arr[i]);
	}
}
