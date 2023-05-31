#include <stdio.h>

int f(int n){
	int s=0;

	while(n){
		s = s*10;
		s = s + n%10;
		n = n/10;
	}
	return s;
}

int main(){
	int a,b;
	
	scanf("%d",&a);
	
	b = a + f(a);
	if(f(b)==b){
		printf("YES");
	}else{
		printf("NO");
	}
}
