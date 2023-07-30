#include <stdio.h>

int main(){
	int i,n[11],result=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&n[i]);
	}
	i=0;
	while(1){
		if(n[i]%5==0){
			result = n[i];
			break;	
		}
		i++;
	}
	printf("%d",result);
}
