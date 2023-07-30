#include <stdio.h>

int f(int k){
	if(k<1)
		return;
	f(k/2);
	printf("%d",k%2);
}
int main(){
	int n;
	
	scanf("%d",&n);
	if(n>0)
		f(n);
	else
		printf("0");
	return 0;
}
