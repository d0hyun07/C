#include <stdio.h>
#include <string.h>

int main(){
	int i;
	int right=0,left=0;
	char arr[100001];
	scanf("%s",arr);
	
	for(i=0;i<strlen(arr);i++){
		if(arr[i]=='('){
			right += 1;
		}
		else if(arr[i]==')'){
			left += 1;
		}
	}
	printf("%d %d",right,left);
}
