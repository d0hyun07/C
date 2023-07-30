#include <stdio.h>

int main(){
	int a,b,c,n,r;
	int i;
	scanf("%d %d %d %d",&a,&b,&c,&n);
	r = a;
	for(i=1;i<n;i++){
		r = r*b+c;
	}
	printf("%d",r);
}
