#include <stdio.h>

int main(){
	int i,n,plus;
	int result=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&plus);
		if(plus%5==0){
			result = result + plus;
		}
	}
	
	printf("%d",result);
}
