#include <stdio.h>


int main(){
	char str[101];
	int c=0, cc=0;
	printf("100자 이내의 문자열을 입력하세요 : ");
	scanf("%s",str);
	int i;
	for(i=0;str[i]!=NULL;i++){
		if(str[i]=='c'||str[i]=='C'){
			c=c+1;
			if(str[i+1]=='c'||str[i+1]=='C'){
				cc=cc+1;
			}
		}
	}
	printf("C의 갯수는 : %d\n",c);
	printf("CC의 갯수는 : %d",cc);
	
}
