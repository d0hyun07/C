#include <stdio.h>

int main(){
	int i,n;
	int result=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		result = result + i; 	
	}
	
	printf("%d",result);
}
