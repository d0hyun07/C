#include <stdio.h>

int main(){
	int arr[1000][1000];
	int n;
	int s = 1;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			arr[i][j] = s;
			printf("%d ",arr[i][j]);
			s = s+1;
		}
		printf("\n");
	}
	
	return 0;
}
