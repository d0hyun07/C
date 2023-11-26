#include <stdio.h>

int main(){
	int a,b,i,j;
	int n[1000]={};
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d", &n[i]);
	}
	
	for(i=0;i<a-1;i++){
		for(j=0;j<a-1;j++){
			if(n[j]>n[j+1]){
				int c;	
				c = n[j];
				n[j] = n[j+1];
				n[j+1] = c;
				
			}
		}
	}
	
	printf("%d",n[a-1]-n[0]);
	
	return 0;
}
