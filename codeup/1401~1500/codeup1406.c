#include <stdio.h>

int main(){
	char arr[1000];
	
	gets(arr);
	
	if(arr[0] == 'l'){
		if(arr[1] == 'o'){
			if(arr[2] == 'v'){
				if(arr[3] == 'e'){
					if(arr[4] == '\0'){
						printf("I love you.");
					}
				}
			}
		}
	}
	return 0;
}
