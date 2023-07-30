#include <stdio.h>

int main(){
	int i,j;
	int n;
	int k[10001];
	int fast;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&k[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(k[j]>k[j+1]){
				fast = k[j];
				k[j] = k[j+1];
				k[j+1] = fast;
			}
		}
	}
	printf("%d",fast);
	
	return 0;
}
