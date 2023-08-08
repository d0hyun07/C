#include <stdio.h>
int n;

void f(int k){
	if(k==0) return;
	printf("%d\n",k);
	f(k-1);
}

int main(){
	scanf("%d",&n);
	f(n);
	return 0;
}
