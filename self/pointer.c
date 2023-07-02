#include <stdio.h>

int main(){
	char a[100];
	scanf("%s",a);
	
	char *b;
	int i,n,m;
	
	scanf("%d %d",&n,&m);
	for(i=n-1;i<m;i++){
		b = a+i;
		printf("%c",*b);
	}
}
