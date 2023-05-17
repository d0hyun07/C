#include <stdio.h>

int main(){
	int n,m;
	int arr[10000001] = {};
	int num;
	int i;
	
	scanf("%d", &n);
	for(i = 0;i<n;i++){
		scanf("%d",&num);
		arr[num] = 1;
	}
	
	scanf("%d",&m);
	for(i = 0;i<m;i++){
		scanf("%d",&num);
		printf("%d ",arr[num]);
	}
	
	return 0;
}
