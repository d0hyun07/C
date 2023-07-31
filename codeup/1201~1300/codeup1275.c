#include <stdio.h>

int main(){
	int a=1,n,k,i;
	
	scanf("%d %d",&n,&k);
	
	for(i=0;i<k;i++){
		a = a*n;
	}
	printf("%d",a);
}
