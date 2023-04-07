#include <stdio.h>

int main(){
	float a,b;
	int i;
	scanf("%f %f",&a,&b);
	for(i=a;i<=b;i=i + 0.01){
		printf("%f",i);
	}
}
