#include <stdio.h>

int main(){
	int y,m,d,s,n;
	
	scanf("%2d%2d%2d-%1d%d",&y,&m,&d,&s,&n);
	
	printf("%d%.2d/%.2d/%.2d %s",s==1||s==2 ? 19:20,y,m,d,s == 1 || s == 3 ? "M":"F");
}
