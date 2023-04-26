#include <stdio.h>

int main(){
	char string[10];
	printf("당신의 이름은 무엇입니까? : ");
	scanf("%s",string);
	printf("안녕하세요 %s님\n",string);
	
	return 0;
}
