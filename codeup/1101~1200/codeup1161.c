#include <stdio.h>

int main(){
	int a,b;
	
	scanf("%d %d",&a,&b);
	
	if(a%2==0){
		if(b%2==0){
			printf("礎熱+礎熱=礎熱");
		}else{
			printf("礎熱+�汝�=�汝�");
		}
	}else{
		if(b%2==0){
			printf("�汝�+礎熱=�汝�");
		}else{
			printf("�汝�+�汝�=礎熱");
		}
	}
}
