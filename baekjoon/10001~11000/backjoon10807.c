#include <stdio.h>

int main(){
	int N[100];
	int v,count;
	int i,j;
	int sum=0;
	scanf("%d",&count);
	for(i=0;i<count;i++){
		scanf("%d",&N[i]);
	}
	
	scanf("%d",&v);
	
	for(j=0;j<count;j++){
		if(N[j]==v){
			sum++;
		}
	}
	printf("%d",sum);
	
	
	return 0;
}
