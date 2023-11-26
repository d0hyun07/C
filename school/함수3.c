#include <Stdio.h>
int f(int n){
	if(n==1)
		return n;
	else
		return f(n-1) * n;
}
main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
}
