#include <stdio.h>

int main(){
	int n,max1=0,max2=0,i;
	for(i=0; i<10; i++){
		scanf("%d",&n);
		if(n%2==0){
			if(n > max2){
				max2 = n;
			}
		}else{
			if(n > max1){
				max1 = n;
			}
		}
	}
	if(max1==0){
		printf("%d",max2);
	}else if(max2==0){
		printf("%d",max1);
	}else{
		printf("%d %d",max1,max2);
	}
	
}
