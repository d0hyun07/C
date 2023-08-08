#include <stdio.h>

int main(){
	int n;
	int i,j,k;
	int arr[1001];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i,k=0;j<n,k<n;j++,k++){
			if(j==n){
				j=0;
			}
			
			printf("%d ",arr[j]);
		}
		printf("\n");
	}	
}
