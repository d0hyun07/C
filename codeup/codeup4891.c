#include <stdio.h>

int main(){
	int n,i;
	int arr[1001] = {};
	int max = 0;
	int min = 1002;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
		if(arr[i]<min){
			min = arr[i];
		}
	}
	printf("%d",max-min);
	
	return 0;
}
