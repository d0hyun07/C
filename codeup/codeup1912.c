#include <stdio.h>
int n;

int f(int k){
	if(k<=1) return 1;
	return k*f(k-1);
}

int main(){
	scanf("%d",&n);
	
	printf("%d",f(n));
}
