#include <stdio.h>

int main(){
	char t[1000] = "";
	char trans_t[1000] = "";
	scanf("%s",t);
	
	int i;
	for(i=0;t[i]!= '\0';i++){
		if(t[i]>=65 && t[i]<=90){
			trans_t[i] = t[i]+32;
		}else if(t[i]>=97 && t[i]<=122){
			trans_t[i] = t[i] - 32;
		}else{
			trans_t[i] = t[i];
		}
	}
	printf("%s",trans_t);
}
