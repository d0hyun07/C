#include <stdio.h>

int main(){
	int n,i,a,b=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a>b){
			b=a;
		}
	}
	printf("%d",b);
}
