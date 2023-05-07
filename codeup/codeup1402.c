#include <stdio.h>

int main(){
	int num;
	int n[1001];
	int i;
	
	scanf("%d",&num);
	for(i=0;i<num;i++)
		scanf("%d",&n[i]);
	
	for(i=num-1;i>=0;i--)
		printf("%d ",n[i]);
	
	
	return 0;
}
