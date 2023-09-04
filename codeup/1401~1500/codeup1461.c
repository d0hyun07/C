#include <stdio.h>

int main(){
	int i,j;
	int arr[101][101] = {};
	
	int n;
	scanf("%d",&n);
	int x = 1;
	for(i=1;i<=n;i++){
		for(j=n;j>=1;j--){
			arr[i][j] = x;
			x++;
		}
	}
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
