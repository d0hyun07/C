#include <stdio.h>

int main(){
	int i,n;
	int arr[51] = {0,},t;
	
	scanf("%d",&n);
	
	for(i=0;i<n-1;i++){
		scanf("%d",&t);
		arr[t] = 1;
	}
	for(i=1;i<=n;i++){
		if(arr[i]==0){
			printf("%d",i);
		}
	}
}
